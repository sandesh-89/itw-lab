#include<stdio.h>
 void square(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
     if(i%2!=0)
     {
      int square =arr[i]*arr[i];
       printf("%d",square);
     }
    
     }
      
 }
 
 int main(){
     int i,n;
     int arr[n];
     printf ("enter number of elements ");
     scanf ("%d",&n);
     printf ("enter elements of array");
     for (i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     square(arr,n);
     return 0;
 }