#include <stdio.h>

// Defines the MONTHS and SALESMAN quantity
#define MONTH 3
#define SALESMAN 5


// Function to find the lowest sales Month
int lowestMonth(float matrice[MONTH][SALESMAN], char month[MONTH][4]) {
    
    int worstMonth = 0;
    // Vector to sum the values of sales with each month
    float total[MONTH] = {0};

    for (int i = 0; i < MONTH; i++) {
        for (int y = 0; y < SALESMAN; y++) {
            total[i] = total[i] + matrice[i][y];
        }
    }


    // Compare and find the lowest sales month
    for (int i = 0; i < MONTH; i++) {
        if (total[worstMonth] > total[i]) {
            worstMonth = i;
        }
    }

    printf("\nThe worst month of sales was '%s' with the total sales of: $%.2f\n", month[worstMonth], total[worstMonth]);

    return 0;
}

// Function to find the best salesman per quarter
int bestSeller(float matrice[MONTH][SALESMAN]) {

    int bestSeller = 0;
    // Vector to sum the values of sales with each salesman
    float total[SALESMAN] = {0};

    for (int i = 0; i < MONTH; i++) {
        for (int y = 0; y < SALESMAN; y++) {
            total[y] = total[y] + matrice[i][y];
        }
    }

    // Compare and find the best salesman
    for (int i = 0; i < SALESMAN; i++) {
        if (total[bestSeller] < total[i]) {
            bestSeller = i;
        }
    }

    printf("\nThe best performance was of V%d with the total sales of $%.2f\n", bestSeller + 1, total[bestSeller]);

    return 0;
}

int main(void) {
    int p = 0;

    // Values that need to me storaged
    float values[15] = {2500.90, 1300.99, 3000.10, 4400.80, 2800.90, 1000.90, 500.90, 600.25, 1200.40, 2300.50, 8900.50, 9000.75, 7500.30, 7000.20, 8500.00};
    // Name of each month
    char month[MONTH][4] = {"Jan", "Fev", "Mar"};
    // Matrice with the sized needed
    float matrice[MONTH][SALESMAN] = {0.00};

    // Print the basis for the matrice
    printf("      V1        V2        V3        V4        V5\n");

    // Set the values in the matrice and print out.
    for(int i = 0; i < MONTH; i++) {
        printf("%s", month[i]);
        for(int y = 0; y < SALESMAN; y++) {
            matrice[i][y] = values[p];
            printf("%10.2f", matrice[i][y]);
            p++;
        }
        printf("\n");
    }

    bestSeller(matrice);
    lowestMonth(matrice, month);

    return 0;
}