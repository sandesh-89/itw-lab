#include<stdio.h>
int main()
{
    int arr[100],search,i,n;
    printf("enter number of elements in the array");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter number to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
           {
            printf("%d is present at location %d",arr[i],i+1);
            break;
           }
              if(i==n)
              {
                printf("%d is not present in the array ",search);
        }
    }
        return 0;
}