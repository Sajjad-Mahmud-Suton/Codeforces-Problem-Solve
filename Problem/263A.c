#include<stdio.h>
#include<stdlib.h>

int main()
{
    int mat[5][5],m=0,n=0,i,j;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5 ; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
  
    
    for(i=0; i<5; i++)
    {
        for(j=0; j<5 ; j++)
        {
           if(mat[i][j]==1)
           {
               m = i+1;
               n = j+1;
           }
        }
    }
    int row = abs(3-m);
    int col = abs(3-n);
    printf("%d\n",row+col);
    
    
    
}