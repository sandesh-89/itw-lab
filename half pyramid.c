#include <stdio.h>  
  
int main()  
{  
    int n,i,j,k;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<=i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=n-i;k++)  
       {  
           printf("*");  
       }  
      
     
      printf("\n");  
    }  
    return 0;  
}  