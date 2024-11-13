#include<stdio.h>
main()
{
 int i,j,rows,n=1;
 printf("enter number of rows");
 scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
    for(j=1;j<=i;j++)
    {
     printf("%d ",n++);
    }
    printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
    for(j=1;j<=i;j++)
    {
     printf("%d ", n++);
    }
    printf("\n");
    }

 }

