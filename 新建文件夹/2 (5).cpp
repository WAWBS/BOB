//计算多项式的值 
#include<stdio.h>
int main()
{float x,a;
 printf("请输入x:");
 scanf("%f",&x);
 a=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
 printf("%f",a);
 return 0;
}
