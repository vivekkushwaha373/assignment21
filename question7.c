#include<stdio.h>
#include<math.h>
struct time
{
    int hour;
    int minute;
};
void setdata(struct time *s1)
{
 printf("enter hour: ");
 scanf("%d",&s1->hour);
 printf("enter minute: ");
 scanf("%d",&s1->minute);
}
void getdata(struct time s1,struct time s2)
{
int h,m;
// h=s1.hour>s2.hour?s1.minute>s2.minute?s1.hour-s2.hour:s1.hour-s2.hour-1:s2.minute>s1.minute?s2.hour-s1.hour:s2.hour-s1.hour-1;
// m=s1.minute>s2.minute?s1.minute-s2.minute:s2.minute-s1.minute;
if(s1.hour>s2.hour)
{   h=s1.hour-s2.hour;
    if(s1.minute>=s2.minute)
    {m=s1.minute-s2.minute;
        printf("time period difference %d hour: %d minute",h,m);
    }
    else
    {
    
        m=s1.minute-s2.minute+60;
         printf("time period difference %d hour: %d minute",h-1,m);
    }
}
else
{
   h=s2.hour-s1.hour;
     if(s2.minute>=s1.minute)
    { 
        m=s2.minute-s1.minute;
        printf("time period difference %d hour: %d minute",h,m);
    }
    else
    {
    
        m=s2.minute-s1.minute+60;
         printf("time period difference %d hour: %d minute",h-1,m);
    }
}

}
int main()
{
    struct time t1,t2;
    printf("enter first time perid: \n");
    setdata(&t1);
    printf("enter second time period: \n");
    setdata(&t2);
    getdata(t1,t2);
    // printf("%d",t1.hour);
}