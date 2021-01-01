#include<stdio.h>
int main(void){
	int i=0,n,a[1000],b[1000],c[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
			scanf("%d%d%d",&a[i],&b[i],&c[i]);
	if(a[i]+b[i]<=c[i]||a[i]+c[i]<=b[i]||b[i]+c[i]<=a[i])
	printf("No\n");
	else	if(a[i]*a[i]==b[i]*b[i]+c[i]*c[i]||a[i]*a[i]==b[i]*b[i]-c[i]*c[i]||a[i]*a[i]+b[i]*b[i]==c[i]*c[i])
		 printf("Yes\n");
	else if (a[i]<=0||b[i]<=0||c[i]<=0)
	printf("No\n");
	else printf("No\n");
}
return 0;
}
