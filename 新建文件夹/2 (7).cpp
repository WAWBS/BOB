//�����һ�����������»����ʣ��Ĵ�����
#include<stdio.h>
int main()
{float loan,rate,payment;
 float a,b,c;
 printf("Enter amount of loan: ");
 scanf("%f",&loan);
 printf("Enter interest rate: ");
 scanf("%f",&rate);
 printf("Enter monthly payment: ");
 scanf("%f",&payment);                       //�����ܴ�������ʡ��»����
 a=loan-payment+loan*rate/1200;
 printf("Balance remaining after first payment:%.2f\n",a);
 b=a-payment+a*rate/1200;
 printf("Balance remaining after second payment:%.2f\n",b);
 c=b-payment+b*rate/1200;
 printf("Balance remaining after third payment:%.2f\n",c);//����ÿ��ʣ������ 
 return 0;
  } 
