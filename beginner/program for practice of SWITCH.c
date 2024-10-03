/*this program is a practice of switch keyword and its implementation
in this program we can find the area of square,circle,paralellogram 
rectangle */
/*created by CHIRAG YADAV on 26 september 2024*/

#include <stdio.h>

void main()
{
 int l,b,h,r,wish;
 printf("enter 1 to calulate the area of a sqaure.\n");
 printf("enter 2 to calculate the area of a rectangle.\n");
 printf("enter 3 to calculate the area of a circle.\n");
 printf("enter 4 to calculate the area of a parallelogram.\n");
 printf("what is your wish?\n");
 scanf("%d",&wish);
 switch(wish)
 {
 case 1:
 printf("enter the side length: ");
 scanf("%d",&l);
 printf("the area is : %d",l*l);break;
 case 2:
 printf("enter the l and b: ");
 scanf("%d %d ",&l,&b);
 printf("the area is: %d",l*b);break;
 case 3:
 printf("enter the radius: ");
 scanf("%d",&r);
 printf("the area is: %f",3.14*r*r);break;
 case 4:
 printf("enter b and h:");
 scanf("%d %d",&b,&h);
 printf("the area is: %d",b*h);break;
 default:
 printf("invalid wish");
 break;
 } 

}
