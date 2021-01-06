#include<stdio.h>
#include<string.h>
int main(void){
	char a[100];
	fgets(a,10,stdin);
	printf("%s",a);
}
