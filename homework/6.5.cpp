//将输入的数字逆输出 
#include<stdio.h>
int main()
{int a,b,c,d,e;
 printf("Enter a number:");
 scanf("%d",&a);
 if(a<10){
 	printf("%d",a);
 }
 else if(10<=a&&a<100){
 	b=a%10;
 	c=(a-b)/10;
 	printf("%d%d",b,c);
 } 
 else if(100<=a&&a<1000){
 	b=a%100;
 	c=(a-b)/100;
 	d=b%10;
 	e=(b-d)/10;
 	printf("%d%d%d",d,e,c);
 }
 
 } 
