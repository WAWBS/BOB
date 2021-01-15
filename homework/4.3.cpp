//将用户输入的整数以八进制显示 
#include<stdio.h>
int main(void)
{int x;
printf("Enter a number between 0 and 32767:");
scanf("%d",&x);
printf("In octal,your number is:%.5o",x); 
return 0;
}
