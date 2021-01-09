#include<stdio.h>

int main(){
	int x;
	int *p=&x;
	printf("%x\n",p);
	printf("%x",p+1);
} 
