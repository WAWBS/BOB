//�û�����һ����λ��������˳����� 
#include<stdio.h>
int main()
{int x,y,z,o,p;
printf("Enter a three-digit number:");
 scanf("%d",&x); 
 y=x%100;
 z=y%10;
 o=(y-z)/10;
 p=(x-y)/100;
  
 printf("%d%d%d",z,o,p);
 return 0;
  
 } 
