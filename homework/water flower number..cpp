#include<stdio.h>
#include<string.h>
int main(void){
	int T,n,m,i=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d%d",&n,&m);
		int t=0;
		int a1,a2,a3;
		for(;n<m;n++){
		a1=n%10;//¸öÎ» 
		a2=(n-a1)%100/10;
		a3=(n-10*a2-a1)/100;
		if(a1*a1*a1+a2*a2*a2+a3*a3*a3==n){
			if(n<m-1){
				printf("%d ",n);
			t++;
			}
			else if(n==m-1)
			printf("%d",n);
		}
}

       if(t==0)
       printf("-1\n");
}
  return 0;
}
