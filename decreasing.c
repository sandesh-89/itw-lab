// decreasing by recursion
#include<stdio.h>
 int decreasing ( int n){
    if(n==0) return ;
    printf("%d\n",n);
    decreasing(n-1);
     return; 
    } 
int main (){
    int n;
    printf("enter n");
    scanf("&d",&n);
    decreasing(n);
    return 0;
}
// search fro duplicate element 
#include<stdio.h>
int main(){
    int arr[7]={1,2,5,4,5,6,7};
    for(int i=0;i<7;i++){
        for( int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("%d is a duplicate element ",arr[i]);
            }
        }
    }
    return 0;
}

//factorial by recursion 
#include<stdio.h>
 int factorial( int n){
    if(n==0||n==1) return 1;
    int recans= n*factorial(n-1);
     return recans; 
    } 
int main (){
    int n;
    printf("enter n");
    scanf("&d",&n);
    int fact =factorial(n);
    printf("%d", fact);
    return 0;
}

//fibonacci by recursion
#include<stdio.h>
 int fibonacci( int n){
    if(n<=2) return n;
    int recans= fibonacci(n-1)+ fibonacci(n-2);
     return recans; 
    } 
int main (){
    int n;
    printf("enter n");
    scanf("&d",&n);
    int fibo =fibonacci(n);
    printf("%d", fibo);
    return 0;
}

//increasingby recursion
#include<stdio.h>
 int increasing ( int x, int n){
    if(x>n) return ;
    printf("%d\n",n);
    increasing(x+1,n);
    printf("%d\n",n);
     return; 
    } 
int main (){
    int n;
    printf("enter n");
    scanf("&d",&n);
    increasing(1,n);
    return 0;
}

//odd even increment 
#include<stdio.h>
int main()
{
    int i;
    arr[7]= {1,2,3,4 5,6,7};
    for(i=0;i<7;i++) 
    {
    if (i%2==0) arr[i]*=2;
    else arr[i]+=10;
    }
    for(i=0;i<7;i++) 
    {
    printf("%d",arr[i]);
    }
    return 0
}

// power by recursion 
#include<stdio.h>
 int power( int a, int b){
    if(b==0) return 1;
    int recans = a*power(a,b-1);
     return recans; 
 } 
int main (){
    int a;
    printf("enter a\n");
    scanf("&d",&a);
    int b;
    printf("enter b");
    scanf("&d",&b);
    int pow =power(a,b);
    printf("%d", pow);
    return 0;
}

//sum by recursion 
#include<stdio.h>
 int sum( int n){
    if(n<=1) return 1;
    int recans= n+sum(n-1);
     return recans; 
    } 
int main (){
    int n;
    printf("enter n");
    scanf("&d",&n);
    int addition=sum(n);
    printf("%d", fact);
    return 0;
}