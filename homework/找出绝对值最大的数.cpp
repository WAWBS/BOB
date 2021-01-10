#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void){
    int i=0,n,a[1000],d;
    memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=0;j<n;j++){
		if(j==0)
		d=a[j];
		if(fabs(d)<fabs(a[j+1]))
		d=a[j+1];
	}
}
	printf("%d\n",d);
	return 0;
}
