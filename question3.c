#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input()
{
    struct employee b1;
    char str[20];
printf("enter employee id: ");
scanf("%d",&b1.id);
getchar();
printf("enter employee name: ");
gets(str);
strcpy(b1.name,str);
printf("enter employee salary: ");
scanf("%f",&b1.salary);
return b1;
}
void display(struct employee s1)
{
  printf("employee id: %d\n",s1.id);
    printf("employee name is: %s\n",s1.name);
    printf("employee salary id: %f",s1.salary);
}
int main()
{
    struct employee s1;
    s1=input();
    display(s1[1]);
    return 0;
}