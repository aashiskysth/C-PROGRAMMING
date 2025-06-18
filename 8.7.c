#include <stdio.h>

int main() {
    // Declare a 2x3 matrix
    int matrix[2][3];

    // Read the matrix elements from the user
    printf("Enter the elements of the 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe 2x3 matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
