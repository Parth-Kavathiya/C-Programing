#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i <= 5; i++)
    {
        for( j = 0; j <= 5; j++)
        {
            printf("%d,%d \t",j,i);
        }
        printf("\n");
    }
    
    return 0;
}