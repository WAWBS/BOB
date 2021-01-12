#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1000
int main(void){
	int a[N],b[N][N];
	int i=0,j=0,k=0;
	int w,n,wid;
	while(scanf("%d%d",&w,&n)!=EOF){
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<n-w;i++){
			int u=0;
			for(j=i;j<w;j++){
			b[i][u]=a[j];
			u++;
		}
		}
	if(w%2==0){
		printf("ERROR\n");
	}
	else{
		int temp;
		for(i=0;i<n-w;i++){
			for(j=0;j<w;j++){
				if(b[i][j]j>b[i][j+1]){
					temp=b[i][j+1];
					b[i][j+1]=b[i][j];
					b[i][j]=temp; 
				}
			}
		}
		for(i=0;i<n-w+1;i++){
			for(j=0;j<w;j++){
				b[]
			}
		}
	}
		
	}
	return 0; 
}
