/*program to find the largest of three numbers(if-then-else)*/
#include <stdio.h>

int main()
{
 int a,b,c;
 printf("enter 3 numbers to find the largest of them\n");
 scanf("%d %d %d",&a,&b,&c);
 if(a>=b)
 {
  if(a>=c)
  {
    printf("%d is the largest",a);
  }
 }
 if(b>=c)
 {
    if(b>=a)
    {
        printf("%d is the largest",b);
    }
 }
if(c>=a)
{
    if(c>=b)
    {
        printf("%d is the largest",c);
    }
}
return 0;
}