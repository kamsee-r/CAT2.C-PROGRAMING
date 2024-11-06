//2D arrays
/*
Author: Chris Munene Murithi
Reg: CT101/G/21909/24

an array is a data structure that stores a collection of elements of the same data type in a contaguous block of memory
*/

#include <stdio.h>
int main()
{
    int i,j;
    int scores[2][2]={{65, 92}, {84, 72}};
    int scores2[2][2]={{35, 70}, {59, 67}};
    
    printf("first array:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
        }
        
    }
    printf("\nsecond array:\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("scores2[%d][%d]=%d\n",i,j,scores2[i][j]);
        }
    }
    return 0;
}
            