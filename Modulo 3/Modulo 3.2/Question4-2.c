//Vowel or consonant using switch case
#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the choice:\n1.Vowel\n2.Consonant : ");
    scanf("%d",&ch);
    char a;
	char vowel[5]={'A','E','I','O','U'};
	int i;

    switch (ch)
    {
    case 1:
        for(i = 0; i <= 4; i++)
        {
            printf("%c\n",vowel[i]);
        }
        break;
    case 2:
        for(a = 'A'; a <= 'Z'; ++a)
        {
            if (a == 'A' || a=='E' || a=='I' || a=='O' || a=='U')
            {
                continue;
            }
            printf("%c\n",a);
        }
        break;
    
    default:
        break;
    }
	
	return 0;
}