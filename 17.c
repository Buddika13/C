#include<stdio.h>
int main()
{
int s,i;
printf("Enter array size");
scanf("%d",&s);
int u[s],v[s],w[s];
for(i=0;i<s;i++)
{
printf("Enter value to the element %d of u",i+1);
scanf("%d",&u[i]);
printf("Enter value to the element %d of v",i+1);
scanf("%d",&v[i]);
}
int su=0,sv=0;
for(i=0;i<s;i++)
{
w[i]=u[i]+v[i];
printf("%d\n",w[i]);
}
printf("The vector sum is %d \n");
}


