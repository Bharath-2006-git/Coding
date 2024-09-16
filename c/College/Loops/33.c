// Sai is trying for a job and he is allowed to face maximum of 25 interview
// WRT to each interview two inputs to be given
// Selected or not(y/n) and Offer amount
// If seleected and offer is more than 1 lakh, Sai is not allowed to face further interview
// If placed and offer is less than 1 lakh, he is allowed to face another interview
// Sai is allowed to get maximum of five offers
// Compulsorily he should accept 5th offer even if the salary is less than 1 lakh.



#include <stdio.h>

int main() {
    int totalInterviews = 25;
    int maxOffers = 5;
    int acceptedOffers = 0;

    for (int i = 1; i <= totalInterviews; ++i) {
        char selected;
        double offerAmount;

        printf("Interview number %d:\n", i);
        printf("Selected (y/n): ");
        scanf(" %c", &selected);

        if (selected == 'y' || selected == 'Y') {
            printf("Offer amount (in lakhs): ");
            scanf("%lf", &offerAmount);

            if (offerAmount >= 1.0) {
                printf("Congratulations! You've been placed with an offer of %.2lf lakhs.\n", offerAmount);
                break;
            } else {
                printf("Offer amount is less than 1 lakh. You can proceed to the next interview.\n");
                acceptedOffers++;
            }
        } else {
            printf("Not selected. Moving on to the next interview.\n");
        }

        if (acceptedOffers >= maxOffers) {
            printf("You've accepted the maximum allowed offers. Proceeding to the 5th offer.\n");
            break;
        }
    }

    if (acceptedOffers < maxOffers) {
        printf("You've reached the end of the interview process. Accept the 5th offer, even if it's less than 1 lakh.\n");
    }

    return 0;
}
