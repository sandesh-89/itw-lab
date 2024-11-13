#include<stdio.h>
int main(){ 
    int arr[100],i,n;
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter the elements of array ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  
    int largest =arr[0];
    int seclargest=arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            seclargest=largest;
            largest =arr[i];
        }
         else  if(arr[i]>seclargest && arr[i]!=largest)
        {
            seclargest=arr[i];
        }
    }
    printf("largest = %d , second largest= %d",largest,seclargest);
    return 0;
}