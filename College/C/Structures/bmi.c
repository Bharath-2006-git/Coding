#include <stdio.h>
#include <string.h>

struct height {
    int feet;
    int inch;
};

struct bmi {
    struct height person_height;
    int weight;
};

struct person {
    char name[20];
    struct bmi person_bmi;
    char decision[20];
};

int main() {
    int n, i;
    printf("Enter number of people: ");
    scanf("%d", &n);
    struct person p[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter name of person %d: ", i + 1);
        scanf(" %[^\n]s", p[i].name);
        
        printf("Enter height of person %d in feet and inch: ", i + 1);
        scanf("%d %d", &p[i].person_bmi.person_height.feet, &p[i].person_bmi.person_height.inch);
        
        printf("Enter weight of person %d in kg: ", i + 1);
        scanf("%d", &p[i].person_bmi.weight);
        
        
    }
    for(i=0;i<n;i++){
        // Calculate BMI
        double height_meters = (p[i].person_bmi.person_height.feet * 12 + p[i].person_bmi.person_height.inch) / 39.37;
        double d = p[i].person_bmi.weight / (height_meters * height_meters);

        // Assign decision based on BMI
        if (d <= 18.5) {
            strcpy(p[i].decision, "Underweight");
        } else if (d <= 24.9) {
            strcpy(p[i].decision, "Normal Weight");
        } else if (d <= 39.9) {
            strcpy(p[i].decision, "Overweight");
        } else {
            strcpy(p[i].decision, "Obese");
        }

        // Print individual results
        printf("%s is %s\n", p[i].name,p[i].decision);
    }
    return 0;
}
