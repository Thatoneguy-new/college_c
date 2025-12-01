// wap to multiply any given scaler value to matrix.
#include <stdio.h>

int main(){
    int row, col, i, j;
    printf("enter row and column:");
    scanf("%d %d", &row, &col);
    int a[row][col];
    printf("enter array element:");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int scaler;
    printf("enter scaler value:");
    scanf("%d", &scaler);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0;  j< col; j++)
        {
          a[i][j]= scaler * a[i][j];
          printf("%d ", a[i][j]);
        }printf("\n");
        
    }

}