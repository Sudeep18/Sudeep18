// details of 5 employees
#include<stdio.h>
#include<string.h>
struct employee
{
 char name[20];
 int id;
 float experience;
 int salary;

};
int main()
{
    int i=0;
 struct employee e[5];
 for (i=0;i<5;i++)
 {
     printf("Enter The Details Of Employee %d",i+1);
     printf("\nEnter The Name:");
     scanf("%s",&e[i].name);
     printf("\nEnter The ID:");
     scanf("%d",&e[i].id);
     printf("\nEnter Work Experience:");
     scanf("%f",&e[i].experience);
     printf("\nEnter The Salary:");
     scanf("%d",&e[i].salary);
     printf("\n");
 }
 for(i=0;i<5;i++)
 {
 printf("Details Of Employee %d",i+1);
 printf("\nName:%s\n",e[i].name);
 printf("\nID:%d\n",e[i].id);
 printf("\nWork Experience:%f\n",e[i].experience);
 printf("\nSalary:%d\n",e[i].salary);
 printf("\n");
 }
 return 0;
}

