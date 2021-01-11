#include<stdio.h>
#define N 1000
int main(void){
	void paixu(int a[],int low,int high);
	int split(int a[],int low,int high);
	int n,m;
	scanf("%d%d",&m,&n);
	int i=0,j=0,t=0;
	int a[m+n];
	for(i=0;i<m+n;i++){
		scanf("%d",&a[i]);
	}
	paixu(a,0,m+n-1);
	for(i=0;i<m+n;i++){
		printf("%d ",a[i]);
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
