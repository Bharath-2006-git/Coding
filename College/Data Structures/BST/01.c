#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node* search(struct node *root, int x) {
    if(root == NULL || root->data == x)
        return root;
    else if(x > root->data)
        return search(root->right, x);
    else
        return search(root->left, x);
}

struct node* find_minimum(struct node *root) {
    if(root == NULL)
        return NULL;
    else if(root->left != NULL)
        return find_minimum(root->left);
    return root;
}

struct node* new_node(int x) {
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node* insert(struct node *root, int x) {
    if(root == NULL)
        return new_node(x);
    else if(x > root->data)
        root->right = insert(root->right, x);
    else
        root->left = insert(root->left, x);
    return root;
}

struct node* del(struct node *root, int x) {
    if(root == NULL)
        return NULL;
    if(x > root->data)
        root->right = del(root->right, x);
    else if(x < root->data)
        root->left = del(root->left, x);
    else {
        // No Children
        if(root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // One Child
        else if(root->left == NULL || root->right == NULL) {
            struct node *temp;
            if(root->left == NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }
        // Two Children
        else {
            struct node *temp = find_minimum(root->right);
            root->data = temp->data;
            root->right = del(root->right, temp->data);
        }
    }
    return root;
}

void inorder(struct node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf(" %d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root) {
    if(root != NULL) {
        printf(" %d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ", root->data);
    }
}

int main() {
    struct node *root, *t, *minNode;
    int ch, x, a;
    printf("\nEnter the data to insert: ");
    scanf("%d", &x);
    root = new_node(x);
    printf("\n1. Insertion\n2. Inorder\n3. Preorder\n4. Postorder\n5. Deletion\n6. Search\n7. Find Minimum\n8. Exit");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("\nEnter the root data to insert: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;
            case 2:
                printf("\nInorder traversal:\n");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("\nPreorder traversal:\n");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("\nPostorder traversal:\n");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("\nDeletion:\n");
                printf("\nEnter the element to be deleted: ");
                scanf("%d", &a);
                root = del(root, a);
                break;
            case 6:
                printf("\nEnter the element to search: ");
                scanf("%d", &x);
                t = search(root, x);
                if(t == NULL)
                    printf("\nElement not found!!\n");
                else
                    printf("\nElement found!!\n");
                break;
            case 7:
                minNode = find_minimum(root);
                if(minNode != NULL)
                    printf("\nMinimum element in the BST: %d\n", minNode->data);
                else
                    printf("\nThe BST is empty.\n");
                break;
            case 8:
                exit(0);
        }
    }
    return 0;
}
