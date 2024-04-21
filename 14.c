#include<stdio.h>
int main()
{
int s,i;
printf("Enter array size");
scanf("%d",&s);
int u[s],v[s];
 for(i=0;i<s;i++)
{
printf("Enter a value to the element %d of u",i+1);
scanf("%d",&u[i]);
printf("Enter a value to the element %d of v",i+1);
scanf("%d",&v[i]);
}
}
