
/*A program defining array structure
Author:Genesis Otieno
Date:7/11/2024
Description:it defines an array structure and initializes a 2D array named scores with 2 rows and 2 columns*/
#include<stdio.h>
int main ( ) {
//a 2D array to store scores
int scores[2][2] ={{92,70},{72,59}};
//print the elements using nested loops 
printf("Scores:\n");
for ( int i = 0; i<2; i++) {
    for ( int j=0; j<2; j++){
        printf( "%d" ,scores [i][j]);
    }
    printf ( "\n");
}
    return 0;
}