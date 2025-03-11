#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* right;
    struct node* left;
};

struct node* new_node(int x) {
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node* insert(struct node* root, int x) {
    if (root == NULL) 
        return new_node(x);
    if (x > root->data) 
        root->right = insert(root->right, x);
    else 
        root->left = insert(root->left, x);
    return root;
}

struct node* search(struct node* root,int x){
    if(root==NULL||root->data==x) return root;
    else if(x>root->data) return search(root->right,x);
    else return search(root->left,x);
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    struct node *root = NULL;
    int ch, x;

    printf("\nEnter root data to insert: ");
    scanf("%d", &x);
    root = new_node(x);

    printf("\n1. Insertion\n2. Inorder\n3. Preorder\n4. Postorder\n5. Search\n6. Exit\n");
    while (1) {
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &x);
                root = insert(root, x);
                break;
            case 2:
                printf("\nInorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("\nPreorder Traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("\nPostorder Traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("Enter the value to search: ");
                scanf("%d", &x);
                struct node* result = search(root, x);
                if (result != NULL) printf("Value %d found in the tree\n", x);    
                else printf("Value %d not found in the tree\n", x);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
}
