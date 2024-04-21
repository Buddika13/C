#include<stdio.h>
int findmax(int a,int b)
{
int max;
if (a>b)
    max=a;
else
    max=b;
    return max;
}
int main()
{
int n1,n2;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
printf("The highest number is %d\n",findmax(n1,n2));
}
