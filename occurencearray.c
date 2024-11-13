#include<stdio.h>
int main(){
    int n , i , num ,occr ;
    printf("please  enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elment to be known ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
        occr++;
        
        }
    }
    printf("%d occured %d times",num,occr);
    return 0;
}
