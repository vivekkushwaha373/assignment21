#include<stdio.h>
struct marks
{
 int rollno;
 char name[20];
 float maths_marks;
 float phy_marks;
 float chem_marks;

};
void getdata(struct marks s1,int n)
{
printf("enter student %d detail: \n",n);
printf("student rollno: ");
scanf("%d",&s1.rollno);
getchar();
printf("student name: ");
gets(s1.name);
printf("student maths_marks: ");
scanf("%f",&s1.maths_marks);
printf("student phy_marks: ");
scanf("%f",&s1.phy_marks);
printf("student chem_marks: ");
scanf("%f",&s1.chem_marks);
printf("\n");
}
void display(struct marks p1,int n)
{float percentage;
printf("student %d information: \n");
printf("\n\n");
printf("student name: %s\n",p1.name);
printf("%s's rollno: %d\n",p1.name,p1.rollno);
printf("%s's maths_marks: %f\n",p1.name,p1.maths_marks);
printf("%s's phy_marks: %f\n",p1.name,p1.phy_marks);
printf("%s's chem_marks: %f\n",p1.name,p1.chem_marks);
percentage=p1.maths_marks+p1.chem_marks+p1.phy_marks;
printf("%s's percentage=%f",p1.name,percentage);
}
int main()
{
    struct marks stu[5];
    for(int i=0;i<5;i++)
    {
     getdata(stu[i],i+1);
    }
    for(int i=0;i<5;i++)
    {
     display(stu[i],i+1);
    }
    return 0;
}
