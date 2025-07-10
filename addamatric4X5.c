//  Q 1) To add 2 matrix Elements(4X5)


#include <stdio.h>

int main()
{

    int a[4][5];
    printf("Enter elements for first matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter elements for row %d:\n", i + 1);
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of the first 4x5 matrix are:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    int b[4][5];
    printf("Enter elements for second matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The elements of the second 4x5 matrix are:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t ", b[i][j]);
        }
        printf("\n");
    }
    int c[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of the two 4x5 matrices is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}