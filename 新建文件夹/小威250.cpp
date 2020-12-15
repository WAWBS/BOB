#include<stdio.h>
#include<string.h>
int main(void){
	void son(int a[],int b[],int n,int m);
	int a,b,i,j,ray[1000],wow[1000];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b);
		for(j=0;j<b;j++){
			scanf("%d",&ray[j]);
		}
		son(ray,wow,0,b);
	}
	return 0;
} 
void son(int a[],int b[],int n,int m)
{
		b[n] = 1;
	son(a, b, n + 1, m);
	b[n] = 0;
	son(a, b, n + 1, m);
	if (n == m) 
	{
		printf("--> ");
		for (int k = 0; k < m; k++)
		{
			if (b[k]) 
			{
				printf("%d ", a[k]);
			}
		}
		printf("\n");
		return;
	}

 } 
