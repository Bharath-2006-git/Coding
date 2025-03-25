#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // For Sleep() and UTF-8 support

#define MAX 100

typedef enum { RED, ORANGE, GREEN } TrafficSignal;
typedef enum { LOW, MEDIUM, HIGH } TrafficDensity;

typedef struct {
    int arr[MAX];
    int front, rear;
} Road;

void initRoad(Road *r) {
    r->front = r->rear = -1;
}

int isFull(Road *r) {
    return (r->rear == MAX - 1);
}

int isEmpty(Road *r) {
    return (r->front == -1 || r->front > r->rear);
}

void addVehicle(Road *r, int vehicle) {
    if (isFull(r)) {
        printf("Road Full!\n");
        return;
    }
    if (r->front == -1) r->front = 0;
    r->arr[++r->rear] = vehicle;
}

int removeVehicle(Road *r) {
    if (isEmpty(r)) {
        printf("Road Empty!\n");
        return -1;
    }
    int vehicle = r->arr[r->front++];
    if (r->front > r->rear) r->front = r->rear = -1;
    return vehicle;
}

int hasEmergency(Road *r) {
    if (isEmpty(r)) return 0;
    
    for (int i = r->front; i <= r->rear; i++) {
        if (r->arr[i] == 999) return 1;
    }
    return 0;
}

void handleTraffic(Road *r, TrafficSignal signal) {
    int countdown = (signal == RED) ? 5 : (signal == ORANGE) ? 2 : 5;

    printf("Signal: %s (Wait %d sec)\n", 
           (signal == RED) ? "RED 🛑" : 
           (signal == ORANGE) ? "YELLOW ⚠" : "GREEN ✅", countdown);

    if (signal == RED && hasEmergency(r)) {
        printf("🚨 Emergency detected! All vehicles stop! Allowing passage...\n");
        
        Road tempRoad;
        initRoad(&tempRoad);
        
        while (!isEmpty(r)) {
            int vehicle = removeVehicle(r);
            if (vehicle == 999) {
                printf("🚑 Emergency vehicle passing...\n");
            } else {
                addVehicle(&tempRoad, vehicle);
            }
        }
        
        while (!isEmpty(&tempRoad)) {
            addVehicle(r, removeVehicle(&tempRoad));
        }
        
        return;
    }

    while (countdown--) {
        printf("⏳ %d seconds left...\n", countdown + 1);
        Sleep(1000);
    }

    if (signal == GREEN) {
        printf("✅ Green Signal - Vehicles can pass\n");
        while (!isEmpty(r)) {
            int vehicle = removeVehicle(r);
            printf("🚗 Vehicle %d passing...\n", vehicle);
        }
    }
}

TrafficDensity getTrafficDensity(int vehicleCount) {
    if (vehicleCount < 10) return LOW;
    else if (vehicleCount < 20) return MEDIUM;
    return HIGH;
}

void printRoad(Road *r) {
    if (isEmpty(r)) {
        printf("Road is clear\n");
        return;
    }
    
    printf("Road contents: ");
    for (int i = r->front; i <= r->rear; i++) {
        if (r->arr[i] == 999)
            printf("🚑 ");
        else
            printf("🚗%d ", r->arr[i]);
    }
    printf("\n");
}

int main() {
    SetConsoleOutputCP(CP_UTF8);  // Enable UTF-8 for emoji output

    Road trafficRoad;
    initRoad(&trafficRoad);

    int n, vehicle;
    printf("Enter the number of vehicles: ");
    scanf("%d", &n);
    
    printf("Enter vehicle IDs (999 for emergency vehicle):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vehicle);
        addVehicle(&trafficRoad, vehicle);
    }
    
    printRoad(&trafficRoad);
    
    TrafficDensity density = getTrafficDensity(trafficRoad.rear - trafficRoad.front + 1);
    printf("Traffic Density: %s\n", 
           (density == LOW) ? "LOW" : 
           (density == MEDIUM) ? "MEDIUM" : "HIGH");

    handleTraffic(&trafficRoad, RED);
    printRoad(&trafficRoad);
    
    handleTraffic(&trafficRoad, ORANGE);
    printRoad(&trafficRoad);
    
    handleTraffic(&trafficRoad, GREEN);
    printRoad(&trafficRoad);

    return 0;
}
