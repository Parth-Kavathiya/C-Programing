//WAP to take two array input from user and sort them in ascending or descending order as per user's choice
#include <stdio.h>
int main () 
{
    int order[5];
    int i,j,temp=0,ch;
    printf("Enter five element\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&order[i]);
    }
    printf("1.ascending order\n2.descending order\nEnter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        for(i=0; i<5; i++)
        {
            for(j=i+1; j<5; j++)
            {
                if(order[i]>order[j])
                {
                    temp = order[i];
                    order[i] = order[j];
                    order[j] = temp;
                }
            }
        }
        printf("Array Element: ");
        for(i=0; i<5; i++)
        {
            printf("%d ",order[i]);
        }
        break;
        case 2:
            for(i=0; i<5; i++)
        {
            for(j=i+1; j<5; j++)
            {
                if(order[i]<order[j])
                {
                    temp = order[i];
                    order[i] = order[j];
                    order[j] = temp;
                }
            }
        }
        printf("Array Element: ");
        for(i=0; i<5; i++)
        {
            printf("%d ",order[i]);
        }
        break;
    default:
        break;
    }
}

