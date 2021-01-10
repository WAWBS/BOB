#include<stdio.h>
#include<string.h>
#define N 1000
int main(void){
	void paixu(int a[],int len);
	
    int a[N],b[N];
	int i=0,n,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%d",&a[i]);
		}
		int j=0;
		paixu(a,i);
		for(j=0;j<i;j++){
			b[k]=a[j];
			if(a[j]==a[j+1]){
				continue;
			}
			else{
				k++;
				b[k]=a[j+1];
			}
		}
		printf("%d\n",k);
	
	return 0;
}
void paixu(int a[],int len){
	int i=0,j=0;
	int max=0;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-i-1;j++){
			if(a[j]>a[j+1]){
				max=a[j+1];
				a[j+1]=a[j];
				a[j]=max;
			}
		}
	}
} 
