#include<stdio.h>
int main()
{
int odd=0,even=0,no;
int counter=1;
while(counter<=10)
{
    printf("enter %d number",counter);
    scanf("%d",&no);
    if(no%2==0)
    even=even+1;
     else
    odd=odd+1;
    counter=counter+1;

}
printf("The totel count of odd is %d\n",odd);
printf("The totel count of even is %d\n",even);
}
