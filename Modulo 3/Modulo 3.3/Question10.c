/*Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age*/
//write a program of structure employee that provides that following information -print and dispaly empno,empname address and age 
#include<stdio.h>
struct employee
{
    int empno;
    char empname[10];
    char address[10];
    int age;
};

int main()
{
    struct employee obj[5];
    int i;
    for(i=0; i<5; i++)
    {
    printf("Enter the employee no: ");
    scanf("%d",&obj[i].empno);
    printf("Enter the employee name: ");
    scanf("%s",&obj[i].empname);
    printf("Enter the employee adderss: ");
    scanf("%s",&obj[i].address);
    printf("Enter the employee age: ");
    scanf("%d",&obj[i].age);
    }
    for(i=0; i<5; i++)
    {
        printf("\n%s, numbers is %d and address %s and age is %d",obj[i].empname,obj[i].empno,obj[i].address,obj[i].age);
    }
	return 0;
}