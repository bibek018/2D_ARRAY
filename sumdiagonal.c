//  Q 2) To find the summation of all left digonal elements as well as right diagonal elements in 5X5 matrix

#include <stdio.h>

int main()
{
    int matrix[5][5];
    int leftDiagonalSum = 0, rightDiagonalSum = 0;
    int i, j;

    // Input the 5x5 matrix
    printf("Enter elements of 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe 5x5 matrix is:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate left diagonal sum (main diagonal: i == j)
    for (i = 0; i < 5; i++)
    {
        leftDiagonalSum += matrix[i][i];
    }

    // Calculate right diagonal sum (anti-diagonal: i + j == 4)
    for (i = 0; i < 5; i++)
    {
        rightDiagonalSum += matrix[i][4 - i];
    }

    // Display results
    printf("\nLeft Diagonal Elements: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\nSum of Left Diagonal Elements: %d\n", leftDiagonalSum);

    printf("\nRight Diagonal Elements: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", matrix[i][4 - i]);
    }
    printf("\nSum of Right Diagonal Elements: %d\n", rightDiagonalSum);

    // If center element is counted twice (when matrix size is odd)
    printf("\nTotal sum of both diagonals: %d\n", leftDiagonalSum + rightDiagonalSum);
    printf("Total sum (avoiding double counting center): %d\n", leftDiagonalSum + rightDiagonalSum - matrix[2][2]);

    return 0;
}
