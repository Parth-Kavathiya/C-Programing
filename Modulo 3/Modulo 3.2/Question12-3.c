#include<stdio.h>
int main()
{
    int i, j, k;
    for(i = 9; i > 0; i--)
    {
        for(j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for(k = 9; k >= i; k--)
        {
        	if(i%2 != 0){
            printf("* ");
        }
        }
        printf("\n");
    }
}