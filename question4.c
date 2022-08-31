#include<stdio.h>
#include<string.h>
float count=0;
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
    if(count<s1.salary)
    {
        count=s1.salary;
    }
    printf("\n");
}
int main()
{
    struct employee s[10];
    for(int i=0;i<10;i++)
    {
        printf("employee %d detail: \n",i+1);
        s[i]=input();
    }
    for(int i=0;i<10;i++)
    {
        display(s[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(count==s[i].salary)
        printf("\nThe employee %s has highest salary of rupees %f",s[i].name,s[i].salary);
    }
    
    return 0;
}