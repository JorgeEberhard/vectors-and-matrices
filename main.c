#include <stdio.h>

//Defines the MONTHS and SALESMAN quantity
#define MONTH 3
#define SALESMAN 5

int main(void) {
    int p = 0;

    // Values that need to me storaged
    float values[15] = {2500.90, 1300.99, 3000.10, 4400.80, 2800.90, 1000.90, 500.90, 600.25, 1200.40, 2300.50, 8900.50, 9000.75, 7500.30, 7000.20, 8500.00};
    char month[MONTH][4] = {"Jan", "Fev", "Mar"};
    // Matrice with the sized needed
    float matrice[MONTH][SALESMAN] = {0.00};

    //Print the basis for the matrice
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
    
    return 0;
}