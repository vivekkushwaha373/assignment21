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

int main()
{   int temp;
    struct employee s[10];
    float arr[10];
    for(int i=0;i<10;i++)
    {
        printf("employee %d detail: \n",i+1);
        s[i]=input();
        arr[i]=s[i].salary;
    }
   
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
     {
        if(arr[i]==s[j].salary)
        {
            printf("%s\n",s[j].name);
        }
     }
    }
    
    return 0;
}