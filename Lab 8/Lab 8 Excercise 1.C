#include <stdio.h>

int checkdiag (int matrix[3][3], int size);

int main(void) {
    FILE * file = fopen("matrix1.txt", "r");
    int matrix[3][3];
    int size;

    fscanf(file, "%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }
    
    printf("%d", checkdiag(matrix, size));
}

int checkdiag (int matrix[3][3], int size) {
    int temp = matrix[0][0];
    int boolean = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j && temp != matrix[i][j] && boolean == 1) {
                boolean = 0;
            } else if (i == j) {
                temp = matrix[i][j];
            }
        }
    }
    return boolean;
}