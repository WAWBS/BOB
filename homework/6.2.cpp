//��������������������ʾ�������������Լ�� 
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
