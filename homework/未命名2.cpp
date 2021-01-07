#include<stdio.h>
#define N 10
int main(){
	int a[N];
	int i;
	printf("Enter 5 numbers:");
	for(;;){
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	if(a[1]-a[0]==a[2]-a[1]&&a[3]-a[2]==a[4]-a[3]&&a[3]-a[2]==a[2]-a[1]){
		int n;
		n=a[2]-a[1];
		printf("case one\n%d %d %d %d %d",a[4]+n,a[4]+2*n,a[4]+3*n,a[4]+4*n,a[4]+5*n);
		}
	else if(a[0]/a[1]==a[1]/a[2]&&a[2]/a[3]==a[3]/a[4]&&a[1]/a[2]==a[2]/a[3]){
		int m;
		m=a[1]/a[0];
		printf("case two\n%d %d %d %d %d %d",a[4]*m,a[4]*m*m,a[4]*m*m*m,a[4]*m*m*m*m,a[4]*m*m*m*m*m);
		continue;
		}
    else if(a[0]+a[1]==a[2]&&a[3]+a[2]==a[4]&&a[1]+a[2]==a[3]){
    	printf("case three:\n");
    	for(i=4;i<N-1;i++){
    		a[i]=a[i]+a[i-1];
    		printf("%d",a[i]);
    		continue;
		}
	}
	if(a[1]==a[2]&&a[3]==a[4]&&a[0]==a[1]&&a[2]==0){
	return 0;}
}
}
