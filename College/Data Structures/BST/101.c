#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define RED 0
#define ORANGE 1
#define GREEN 2

#define LOW 0
#define MEDIUM 1
#define HIGH 2

typedef struct Node {
    int vehicle;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
    int damagedVehicle;
} Road;

void initRoad(Road* r) {
    r->front = r->rear = NULL;
    r->damagedVehicle = -1;
}

int isEmpty(Road* r) {
    return r->front == NULL;
}

void addVehicle(Road* r, int vehicle) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->vehicle = vehicle;
    temp->next = NULL;
    if (r->rear == NULL) {
        r->front = r->rear = temp;
    } else {
        r->rear->next = temp;
        r->rear = temp;
    }
}

int removeVehicle(Road* r) {
    if (isEmpty(r)) {
        printf("Road Empty!\n");
        return -1;
    }
    Node* temp = r->front;
    int vehicle = temp->vehicle;
    r->front = r->front->next;
    if (r->front == NULL)
        r->rear = NULL;
    free(temp);
    return vehicle;
}

int hasEmergency(Road* r) {
    Node* temp = r->front;
    while (temp != NULL) {
        if (temp->vehicle == 999)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int getTrafficDensity(int count) {
    if (count < 10) return LOW;
    else if (count < 20) return MEDIUM;
    return HIGH;
}

void printRoad(Road* r) {
    if (isEmpty(r)) {
        printf("Road is clear\n");
        return;
    }
    printf("Road contents: ");
    Node* temp = r->front;
    while (temp != NULL) {
        if (temp->vehicle == 999)
            printf("🚑999 ");
        else if (temp->vehicle == -1)
            printf("💥%d ", r->damagedVehicle);
        else
            printf("🚗%d ", temp->vehicle);
        temp = temp->next;
    }
    printf("\n");
}

void handleTraffic(Road* r, int signal, int accidentHappened, int damagedVehicle) {
    int countdown = (signal == RED) ? 5 : (signal == ORANGE) ? 2 : 5;
    printf("Signal: %s (Wait %d sec)\n",
        (signal == RED) ? "RED 🛑" :
        (signal == ORANGE) ? "YELLOW ⚠" : "GREEN ✅", countdown);

    if (signal == RED && hasEmergency(r)) {
        printf("🚨 Emergency detected! All vehicles stop! Allowing passage...\n");
        Road temp;
        initRoad(&temp);
        while (!isEmpty(r)) {
            int v = removeVehicle(r);
            if (v == 999) {
                printf("🚑 Emergency vehicle passing...\n");
            } else {
                addVehicle(&temp, v);
            }
        }
        while (!isEmpty(&temp)) {
            addVehicle(r, removeVehicle(&temp));
        }
        return;
    }

    while (countdown--) {
        printf("⏳ %d seconds left...\n", countdown + 1);
        Sleep(1000);
    }

    if (signal == GREEN) {
        Road temp;
        initRoad(&temp);
        while (!isEmpty(r)) {
            int v = removeVehicle(r);
            if (accidentHappened && v == damagedVehicle) {
                printf("💥 Vehicle %d met with an accident and stays on the road.\n", v);
                addVehicle(&temp, -1);
                temp.damagedVehicle = v;
            } else {
                if (v == 999) {
                    printf("🚑 Emergency vehicle passed.\n");
                } else {
                    printf("🚗 Vehicle %d passed the signal.\n", v);
                }
                Sleep(1000);
            }
        }
        temp.damagedVehicle = damagedVehicle;
        *r = temp;
    }
}

int countVehicles(Road* r) {
    int count = 0;
    Node* temp = r->front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Road road;
    initRoad(&road);

    int n, vehicle;
    printf("Enter the number of vehicles: ");
    scanf("%d", &n);

    printf("Enter vehicle IDs (999 for emergency vehicle):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vehicle);
        addVehicle(&road, vehicle);
    }

    printRoad(&road);

    int density = getTrafficDensity(countVehicles(&road));
    printf("Traffic Density: %s\n",
        (density == LOW) ? "LOW" :
        (density == MEDIUM) ? "MEDIUM" : "HIGH");

    handleTraffic(&road, RED, 0, -1);
    printRoad(&road);

    handleTraffic(&road, ORANGE, 0, -1);
    printRoad(&road);

    char ch;
    int accident = 0, damaged = -1;
    printf("Did an accident happen? (y/n): ");
    scanf(" %c", &ch);
    if (ch == 'y' || ch == 'Y') {
        accident = 1;
        printf("Enter the vehicle number that met with the accident: ");
        scanf("%d", &damaged);
    }

    handleTraffic(&road, GREEN, accident, damaged);
    printRoad(&road);

    return 0;
}
