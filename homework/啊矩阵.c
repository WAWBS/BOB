#include<stdio.h>
#include<math.h>
int main(void){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n][n],b[n][n],c[n][n];
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	int u=0,q=0;
	for(q=0;q<k-1;q++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			c[i][j]=0;
		}
		for(u=0;u<n;u++){
			for(j=0;j<n;j++){
				for(i=0;i<n;i++){
					c[u][j]+=b[u][i]*a[i][j];
				}
			}
	 }
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[i][j]=c[i][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0; 
}
