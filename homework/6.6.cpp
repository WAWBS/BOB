//输入一个数n，显示小于n的偶数的平方表 
#include<stdio.h>
int main()
{int n,m,square;
 m=2;
 printf("This program print a table of squares/n.");
 printf("Enter a number:");
 scanf("%d",&n);
 while(m<=n){
 	if(m%2==0){
	 square=m*m;
	 printf("%d\n",square);
	 }
	 m++;
 	
 } 
 return 0;
}

