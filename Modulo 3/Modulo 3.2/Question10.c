// Write a program macke a summmation of given numbers
#include<stdio.h>
int main()
{
    int num,temp,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num > 0)
    {
        temp = num % 10;
        sum += temp;
        num = num/10;
    }
    printf("Summation is a: %d",sum);
}