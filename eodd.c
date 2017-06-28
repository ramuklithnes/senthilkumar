#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("enter the values:");
  scanf("%d",&a);
  if(a>=0)
  {
    printf("%d" is possitive number);
  }
  {
   printf("%d" is negative number);
  }
  getch();
}
