#include <stdio.h>

int main() {
    int arr[100], search, i, n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Search for the element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at location %d.\n", search, i + 1);
            return 0; // Exit the program after finding the element
        }
    }

    // If the element is not found
    printf("%d is not present in the array.\n", search);

    return 0;
}
