
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the values:");
scanf("%d",&a);
if(a>0)
{
printf("the %d is possitive");
}
else if(a<0)
{
printf("the %d is negative");
}
else
printf("it is zero");
getch();
}
