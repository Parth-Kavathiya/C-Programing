#include<stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the n value: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            printf("%d, ",i);
        }
        
    }
    printf("\n%d",sum);
    
    return 0;
}