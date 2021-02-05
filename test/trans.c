// This C program finds transpose of a matrix nxm

#include<stdio.h>
#include<stdlib.h>

int trans(int n, int m, int **t){
    // Declaring iterators
    int i, j;

    // Printing original matrix
    printf("\nOriginal matrix is \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", *(*t + (i*m + j)*sizeof(int)));
        }
        printf("\n");
    }

    // Printing transpose of the matrix
    printf("\nTranspose is \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", *(*t + (j*m + i)*sizeof(int)));
        }
        printf("\n");
    }

    return 0;
}