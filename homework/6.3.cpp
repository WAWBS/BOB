//将分数化为最简形式 
#include<stdio.h>
int main(void)
{int a2,b2,c,a1,b1;
 printf("Enter a  fraction:");
 scanf("%d/%d",&a1,&b1);
 a2=a1;
 b2=b1;
 c=a2%b2;
 while(c!=0){
	a2=b2;
 	b2=c;
    c=a2%b2;
 	 } 
 	
 	 printf("In lowest terms:%d/%d",a1/b2,b1/b2);
}
