//write a program of structure employee that provides that following information -print and dispaly empno,empname address and age 
#include<stdio.h>
struct employee
{
    int empno;
    char empname;
    char address;
    int age;
};

int main()
{
    struct employee obj;
    printf("Enter the employee no: ");
    scanf("%d",&obj.empno);
    printf("Enter the employee name: ");
    scanf("%s",&obj.empname);
    printf("Enter the employee adderss: ");
    scanf("%s",&obj.address);
    printf("Enter the employee age: ");
    scanf("%d",&obj.age);
    printf("%s, numbers is %d and address %s and age is %d",obj.empname,obj.empno,obj.address,obj.age);
    return 0;
}