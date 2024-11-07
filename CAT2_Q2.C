//Question 2a)
//An array data structure is a collection of variables under a single name.

//Question 2b)
 #include <stdio.h>

int main() {
    int marks[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67},
    };

    int matrix1[2][2];
    int matrix2[2][2];

    for(int m = 0; m < 2; m++) {
        for(int n = 0; n < 2; n++) {
            matrix1[m][n] = marks[m][n];
        }
    }

    for(int m = 2; m < 4; m++) {
        for(int n = 0; n < 2;n++) {
            matrix2[m-2][n] = marks[m][n];
        }
    }

    printf("Matrix 1:\n");
    for(int m = 0; m < 2; m++) {
        for(int n = 0; n < 2; n++) {
            printf("%d ", matrix1[m][n]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(int m = 0; m < 2; m++) {
        for(int n = 0; n < 2; n++) {
            printf("%d ", matrix2[m][n]);
        }
        printf("\n");
    }

    return 0;
}
