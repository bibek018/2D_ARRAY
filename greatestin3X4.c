// Q 1) To find the greatest element in 3X4 array
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
   int max=a[0][0];
    for (int  i = 0; i < 3; i++)
    {
        /* code */
        for (int  j = 0; j < 4; j++)
        {
            /* code */
            if(a[i][j] >max){
              max = a[i][j];
            }
        }
        
    }
    printf("The greatest element in the array is: %d\n", max);


    return 0;
}