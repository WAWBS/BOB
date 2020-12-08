//输入两个整数，计算显示两个整数的最大公约数 
#include<stdio.h>
int main()
{int a,b,c;
 printf("Enter two integers:");
 scanf("%d %d",&a,&b);
 while(a!=0){
 a=b;
 b=c;
 c=a%b;
 }
 printf("Greast common divisor:%d",b);
 return 0;
}
