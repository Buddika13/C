#include<stdio.h>
int findmax()
{
int n1,n2,max;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
if (n1>n2)
    max=n1;
else
    max=n2;
    return max;
}
int main()
{
printf("The highest number is %d\n",findmax());
}
