#include<stdio.h>//µ¹ĞòÊä³öÊıÁĞ 
int main()
{int arr[10],i;
printf("Enter a array(10 numbers):");
for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
for(i=9;i>=0;i--)
printf("%d  ",arr[i]);
}
