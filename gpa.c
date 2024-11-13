// Online C compiler to run C program online
#include <stdio.h>

int main(){
int i,n ,stu[n],sum=0;
printf("enter number of subjects of student");
scanf("%d",&n);
printf("enter marks in every subject ");
for(i=0;i<n;i++)
{
    scanf("%d",&stu[i]);
}
    for(i=0;i<n;i++){
        sum=sum+stu[i];
    }
  float gpa = (sum/n)*1/100;
  printf("%f",gpa);
    return 0;
}