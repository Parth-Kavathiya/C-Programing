//write a program to find out the max from given number.

#include<stdio.h>
int main()
{
    int n,temp,n1,max=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1 = n;
    while (n > 0)
    {
        temp = n % 10;
        if (temp>max){
            max = temp;
        }
        n = n/10;
    }
    printf("Max is a :%d",max);
    return 0;
}