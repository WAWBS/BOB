//计算第一、二、三个月还款后剩余的贷款金额
#include<stdio.h>
int main()
{float loan,rate,payment;
 float a,b,c;
 printf("Enter amount of loan: ");
 scanf("%f",&loan);
 printf("Enter interest rate: ");
 scanf("%f",&rate);
 printf("Enter monthly payment: ");
 scanf("%f",&payment);                       //输入总贷款金额、利率、月还款额
 a=loan-payment+loan*rate/1200;
 printf("Balance remaining after first payment:%.2f\n",a);
 b=a-payment+a*rate/1200;
 printf("Balance remaining after second payment:%.2f\n",b);
 c=b-payment+b*rate/1200;
 printf("Balance remaining after third payment:%.2f\n",c);//计算每月剩余贷款额 
 return 0;
  } 
