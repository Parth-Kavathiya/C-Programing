//WAP to make addition,subtraction,and multiplication of two matrix using 2-D array 
#include<stdio.h>
int main()
{
   int m1[2][2],m2[2][2],ans[2][2];
   int i,j,choice;
   printf("1.addition\n2.subtraction\n3.multiplication\nEnter your choice: ");
   scanf("%d",&choice);
   for (i = 0; i < 2; i++)
   {
      for(j=0; j<2; j++)
      {
         printf("Enter element: ");
         scanf("%d",&m1[i][j]);
      }
   }
   for (i = 0; i < 2; i++)
   {
      for(j=0; j<2; j++)
      {
         printf("%d ",m1[i][j]);
      }
      printf("\n");
   }
   for (i = 0; i < 2; i++)
   {
      for(j=0; j<2; j++)
      {
         printf("Enter element: ");
         scanf("%d",&m2[i][j]);
      }
   }
   for (i = 0; i < 2; i++)
   {
      for(j=0; j<2; j++)
      {
         printf("%d ",m2[i][j]);
      }
      printf("\n");
   }
   switch (choice)
   {
   case 1:
      for (i = 0; i < 2; i++)
      {
         for (j = 0; j < 2; j++)
         {
            ans[i][j] = m1[i][j] + m2[i][j];
         }
      }
       for (i = 0; i < 2; i++)
      {
         for (j = 0; j < 2; j++)
         {
            printf("%d ",ans[i][j]);
         }
         printf("\n");
      }
      break;
   case 2:
      for (i = 0; i < 2; i++)
      {
         for (j = 0; j < 2; j++)
         {
            ans[i][j] = m1[i][j] - m2[i][j];
         }
      }
       for (i = 0; i < 2; i++)
      {
         for (j = 0; j < 2; j++)
         {
            printf("%d ",ans[i][j]);
         }
         printf("\n");
      }
      break;
   case 3:
      for (i = 0; i < 2; i++)
      {
         for (j = 0; j < 2; j++)
         {
            ans[i][j] = m1[i][j] * m2[i][j];
         }
      }
       for (i = 0; i < 2; i++)
      {
         for (j = 0; j < 2; j++)
         {
            printf("%d ",ans[i][j]);
         }
         printf("\n");
      }
      break;
   default:
      printf("Please Valid Input");
      break;
   }
}