// WAP to reverse a string and check that the string is palindrone or not 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%s",&str);
    int l = 0;
    int h = strlen(str)-1;
    while (h > 1)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n",str);
            return 0;
        }
    }
    printf("%s is a palindrome\n",str);
    return 0;
} 