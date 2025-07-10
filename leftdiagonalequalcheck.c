//  Q 2) To find the summation of all left digonal elements as well as right diagonal elements in 5X5 matrix

#include <stdio.h>

int main()
{
    int matrix[4][4];
    int i, j;
    int isEqual = 1; // Flag to check equality (1 = equal, 0 = not equal)

    // Input matrix elements
    printf("Enter elements of 4x4 matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe 4x4 matrix is:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display left diagonal elements
    printf("\nLeft diagonal elements are: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    // Check if all left diagonal elements are equal
    for (i = 1; i < 4; i++)
    {
        if (matrix[i][i] != matrix[0][0])
        {
            isEqual = 0;
            break;
        }
    }

    // Display result
    if (isEqual == 1)
    {
        printf("\nAll left diagonal elements are EQUAL\n");
    }
    else
    {
        printf("\nAll left diagonal elements are NOT EQUAL\n");
    }

    return 0;
}