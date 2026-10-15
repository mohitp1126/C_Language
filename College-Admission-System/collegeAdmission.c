#include <stdio.h>

int main() {
    int year;
    int choice;
    int internal, external;
    char name[50];

    printf("====================================\n");
    printf("       COLLEGE ADMISSION SYSTEM\n");
    printf("====================================\n");

    printf("Enter student name: ");
    scanf(" %49[^\n]", name);

    printf("\nWelcome, %s!\n", name);
    printf("Your admission is in First Year.\n");

    for (year = 1; year <= 4; year++) {

        printf("\n========== YEAR %d ==========\n", year);

        // Registration
        printf("1. Registration\n");
        printf("Enter 1 to complete registration: ");
        scanf("%d", &choice);

        if (choice != 1) {
            printf("Registration incomplete.\n");
            printf("Admission process stopped.\n");
            printf("-------------------------------\n");
            break;
        }

        printf("Registration successful!\n");
        printf("-------------------------------\n");

        // Examination form
        printf("\nSubmit examination form? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice != 1) {
            printf("Examination form not submitted.\n");
            printf("Academic process stopped.\n");
            printf("-------------------------------\n");
            break;
        }

        printf("Examination form submitted!\n");
        printf("-------------------------------\n");

        // Internal examination
        printf("\nEnter internal marks (out of 100): ");
        scanf("%d", &internal);

        if (internal < 0 || internal > 100) {
            printf("Invalid internal marks.\n");
            printf("-------------------------------\n");
            break;
        }

        if (internal < 40) {
            printf("Internal exam not qualified.\n");
            printf("You cannot proceed to the external exam.\n");
            printf("-------------------------------\n"); 
            break;
        }

        printf("Internal exam qualified!\n");
        printf("-------------------------------\n");

        // External examination
        printf("\nEnter external marks (out of 100): ");
        scanf("%d", &external);

        if (external < 0 || external > 100) {
            printf("Invalid external marks.\n");
            printf("-------------------------------\n");
            break;
        }

        if (external < 40) {
            printf("External exam not qualified.\n");
            printf("You cannot proceed to the next year.\n");
            printf("-------------------------------\n");
            break;
        }

        printf("External exam qualified!\n");
        printf("-------------------------------\n");

        if (year < 4) {
            printf("\nCongratulations! Year %d completed.\n", year);
            printf("Proceeding to Year %d...\n", year + 1);
        }
    }

    if (year == 5) {
        printf("\nCongratulations, %s!\n", name);
        printf("You have completed all four years.\n");
        printf("Graduation requirements completed!\n");
        printf("-------------------------------\n");
    } else {
        printf("\nAcademic process stopped before completion.\n");
        printf("-------------------------------\n");
    }

    printf("\nThank you for using College Admission System!\n");

    return 0;
}

