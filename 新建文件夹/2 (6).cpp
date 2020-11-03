//计算输入金额所需的20、10、5、1面额的最少美元数 
#include<stdio.h>
int main()
{int x,a,b,c,d;
 printf("Enter a dollar amount:",x);
 scanf("%d",&x);
 a=(x-x%20)/20;
 printf("$20 bills:%d\n",a);
 b=(x-20*a-(x-20*a)%10)/10;
 printf("$10 bills:%d\n",b);
 c=(x-20*a-10*b-(x-20*a-10*b)%5)/5;
 printf("$5 bills:%d\n",c);
 d=(x-20*a-10*b-5*c)/1;
 printf("$1 bills:%d\n",d);
 return 0;
}
