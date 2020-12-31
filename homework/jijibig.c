#include<stdio.h>
#include<string.h>
#define N 1000
int main(void) {
    char a[N],temp;
	int i=0,j,x=0,y,t=0;
	while((temp=getchar())!=EOF){
		a[t]=temp;
		t++;
	}
    int count[N];
    for(i=0;i<N;i++){
    	count[i]=0;
	} 
    char b[N][N];
	for(i=0;i<t;i++){//提取单词 
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
			for(j=i;j<t;j++){
				if((a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122))
				  b[x][j-i]=a[j];
				else{
					x++;
					i=j;
					break;
				}
			}
		}
	}
	int len;
	for(i=0;i<x;i++){             //大写字母变为小写 
		len=strlen(b[i]);
		for(j=0;j<len;j++){
			if(b[i][j]<=90)
			  b[i][j]=b[i][j]+32;
		}
	}
	for(i=0;i<x;i++){
		for(j=i;j<x;j++){
			if(strcmp(b[i],b[j])==0)
			  count[i]++;
		}
	}
	int u,max=0;
	for(i=0;i<x;i++){
		if(count[i]>max){
			max=count[i];
			u=i;
		}
		if(count[i]==max){//比较字典序 
			int len1,len2;
			len1=strlen(b[i]);
			len2=strlen(b[u]);
			if(len1<len2)
			  len=len1;
			else
			  len=len2;
			for(j=0;j<len;j++){
				if(b[i][j]<b[u][j])
				  break;
				if(b[i][j]>b[u][j]){
					max=count[i];
					u=i;
					break;
				}
			}
		}
	}
	printf("%s %d\n",b[u],max);
	return 0;
}

