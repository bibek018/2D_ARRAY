// Q 4) To change any element of the array of 7 elements
//        5 6 7 22 2 3 6

#include <stdio.h>

int main()
{
    int arr[7] = {5, 6, 7, 22, 2, 3, 6}; // Initialize array with given elements
    int position, newValue;
    int i;

    // Display original array
    printf("Original array: ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Get position and new value from user
    printf("Enter position (0-6) to change: ");
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position >= 7)
    {
        printf("Invalid position! .\n");
    }
    else
    {

        printf("Enter new value: ");
        scanf("%d", &newValue);

        printf("Current value at position %d is: %d\n", position, arr[position]);

        // Change the element
        arr[position] = newValue;

        // Display modified array
        printf("\nModified array: ");
        for (i = 0; i < 7; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
