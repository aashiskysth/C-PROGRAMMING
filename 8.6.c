#include <stdio.h>

int main() {
    // Initialize a 3D array (2x3x2 array for this example)
    int arr[2][3][2] = {
        {
            {1, 2},
            {3, 4},
            {5, 6}
        },
        {
            {7, 8},
            {9, 10},
            {11, 12}
        }
    };

    // Display the elements of the 3D array
    printf("Elements of the 3D array are:\n");
    for (int i = 0; i < 2; i++) {  // Iterate over 2D matrices
        printf("Matrix %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {  // Iterate over rows
            for (int k = 0; k < 2; k++) {  // Iterate over columns
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
