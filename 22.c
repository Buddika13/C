#include<stdio.h>
void findmax(int a,int b)
{
int max;
if (a>b)
    max=a;
else
    max=b;
printf("The highest number is %d",max);
}
int main()
{
int n1,n2;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
findmax(n1,n2);
}
