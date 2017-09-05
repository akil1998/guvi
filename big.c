#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the value of a /n");
scanf("%d",&a);
printf("enter the value of a /n");
scanf("%d",&b);
printf("enter the value of a /n");
scanf("%d",&c);
if(a>b && b>c)
{
printf("A is big");
}
if(b>a && a>c)
{
printf("B is big");
}
else
{
printf("C is big");
}
}
