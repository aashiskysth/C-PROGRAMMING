#include <stdio.h>

int main() {
    // Initialize a 2D array (3x3 array for this example)
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Display the elements of the 2D array
    printf("Elements of the 2D array are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
