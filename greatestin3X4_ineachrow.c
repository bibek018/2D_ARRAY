// Q 2) To find the greatest element in each row 3X4 array

#include <stdio.h>

int main() {
    int a[3][4];
    int max;

    printf("Enter the elements of the 3X4 array:\n");
    for (int i = 0; i < 3; i++) { // row
        printf("Enter the elements for row %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The elements of the 3X4 array are:\n");
    for (int i = 0; i < 3; i++) { // row
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        int max = a[i][0]; // Initialize max for each row
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("The greatest element in row %d is: %d\n", i + 1, max);
    }
    


    return 0;
}