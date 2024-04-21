#include<stdio.h>
int main()
{
int val [3][4],r,c;
for(r=0;r<3;r++)
{
for(c=0;c<4;c++)
{
    printf("Enter the value to the val[%d][%d]",r,c);
    scanf("%d",&val[r][c]);
}
}
for(r=0;r<3;r++);
{
 for(c=0;c<4;c++);
{
    printf("%d",val[r][c]);
}
printf("\n");
}
}
