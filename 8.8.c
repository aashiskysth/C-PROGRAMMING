#include <stdio.h>

int main() {
    int m, n;

    // Prompt the user to enter the dimensions of the matrices
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Declare two matrices of size m x n and a result matrix for their sum
    int matrix1[m][n], matrix2[m][n], sum[m][n];

    // Read elements for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read elements for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result (sum of the matrices)
    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

