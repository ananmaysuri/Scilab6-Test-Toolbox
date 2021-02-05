#include<stdio.h>
#include "trans.c"

int main(void){
    // Declaring pointer
    int *transpose;
    // Declaring iterators
    int i,j;
    // Declaring variables n (number of rows) and m (number of columns)
    int n,m;

    // Input n and m
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\nEnter number of columns : ");
    scanf("%d", &m);

    // Dynamic Memory Allocation
    transpose = (int*)calloc(n*m, sizeof(int));

    if(transpose == NULL){
        printf("Memory cannot be allocated");
        exit(0);
    }

    // Input matrix of size nxm
    printf("\nEnter the elements of the matrix one by one :\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", transpose + (i*m + j)*sizeof(int));
        }
        printf("\n");
    }

    // Calling transpose function
    trans(n, m, &transpose);

    // Deallocating memory
    free(transpose);

    return 0;
}