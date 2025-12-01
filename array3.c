#include<stdio.h>

int main(){
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int a[row][col];
    printf("Enter array elements:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int element;
            scanf("%d", &a[i][j]);
        
        }
    }
    for (int i = 0; i < row; i++)
    {
        /* code */
    }
    
return 0;    
}