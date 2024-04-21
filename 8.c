#include<stdio.h>
int main()
{
int counter,sum,no;
float avg;
counter=1;
sum=0;
while(counter<=10)
{
    printf("enter %d number",counter);
    scanf("%d",&no);
    sum=sum+no;
    counter=counter+1;

}

avg=(float)sum/10;
printf("The average of 10 numbers is %2f\n",avg);
}
