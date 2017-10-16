/*code to make transpose of a matrix of 3x3*/
#include <stdio.h>
#include <stdlib.h>
#define a matrix

void main()
{
    int i,j,matrix[3][3];
    printf("Enter the 9 Elements of the matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d ",a[i][j]);
        }printf("\n");
    } printf("\n\n\n");
   for(j=0;j<3;j++)
   {
       for(i=0;i<3;i++)
       {
           printf("%3d",a[i][j]);
       }printf("\n");
   }
}
