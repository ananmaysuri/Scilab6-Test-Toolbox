// This C program finds transpose of a matrix nxm

#include<stdio.h>
#include<stdlib.h>
#include "trans.h"

int trans(int row, int col, double *mat, double *ans){
    // Declaring iterators
    int i, j;

    // Transpose Matrix
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            *((ans + i*col) + j) = *((mat + j*row) + i);
        }
    }

    return 0;
}