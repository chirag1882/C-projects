#include <stdio.h>
int main() {
  int a,b,c,largest;
  printf("input 3 numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  if(b>c){
    if(a>b){
    largest = a;}
    else
    {
        largest = b;
    }
    }       
  if(a>c){
     if(b>a){
            largest=b;}
     else
     {
        largest=a;
     }
    }   
 if(c>a){
    if(b>c){
    largest = b;}
    else
    {
        largest = c;
    }
 }
  if(a==b==c)
   {
    largest = a;
   } 
printf("%d is largest",largest);
  return 0;
}