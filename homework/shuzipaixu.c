#include<stdio.h>
#include<string.h>
int main(void){
	int n,i=0;
    int  split(int a[],int low,int high);
	void  paixu(int a[],int low,int high);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int t=0;
		char b[1000];
	    int a[1000];
		for(t=0;;t++){
			scanf("%d",&a[t]);
			scanf("%c",&b[t]);
			if(b[t]=='\n'){
				break;
			}	
		}
	int len=0;
	paixu(a,0,t);
	for(len;len<=t;len++){
		if(a[len]%2==1){
		printf("%d ",a[len]);
		}
	}
	for(len=0;len<=t;len++){
		if(a[len]%2==0){
			printf("%d ",a[len]);
		}
	}
		printf("\n"); 
	}
	
	return 0;
}
void paixu(int a[],int low,int high){
	int temp;
	if(low>=high)return;
	temp=split(a,low,high);
	paixu(a,low,temp-1);
	paixu(a,temp+1,high);
}
int split(int a[],int low,int high){
	int mid=a[low];
	for(;;){
		while(low<high&&mid<=a[high])
		high--;
		if(low>=high)break;
		a[low++]=a[high];
		while(low<high&&a[low]<=mid)
		low++;
		if(low>=high)break;
		a[high--]=a[low];
	}
	a[high]=mid;
	return high;
}
