//write a program make a summation of given number..
#include<stdio.h>
int main()
{
   int num,firstdigit,lastdigit,sum=0;
   printf("Enter the number :");
   scanf("%d",&num);
   lastdigit = num%10;
   while (num>=10)
   {
      num=num/10;
   }
   firstdigit = num;
   sum = firstdigit + lastdigit;
   printf("Summation is a: %d",sum);
}