//找出一串数中的最大数 
#include<stdio.h>
int main()
{float x,y,z;

 while(x>0&&y>0){
 printf("Enter a number:");
 scanf("%f",&x);
 printf("Enter a number:");
 scanf("%f",&y);
 if(x>y)
  z=x;
 else
  z=y;}
printf("The largest number entered was:%f",z);
 
  return 0;
 
 
 
 } 
