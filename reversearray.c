// Q 4) To print the reverse value in the given 6 elements of array


#include <stdio.h>

int main() {
    int arr[6];
    int i;

    // Input 6 elements
    printf("Enter 6 elements:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    // Print in reverse order
    printf("The elements in reverse order are:\n");
    for(i = 5; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}