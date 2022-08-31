#include<stdio.h>
struct student
{
char name[20];
int age;

};
void display(struct student p1,int n)
{
  printf("student %d information: \n",n);
  printf("student name: %s\n ",p1.name);
  printf("student age: %d",p1.age);
  printf("\n\n");
}
int main()
{
   struct student arr[10];
   for(int i=0;i<10;i++)
   {
    printf("student %d information: \n",i+1);
    printf("student name: ");
    gets(arr[i].name);
    printf("student age: ");
    scanf("%d",&arr[i].age);
    getchar();
   }
   for(int i=0;i<10;i++)
   {
    display(arr[i],i+1);
   }
    return 0;
}