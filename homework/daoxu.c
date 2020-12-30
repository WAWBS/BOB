#include<stdio.h>
#include<string.h>
#define N 1000
int main(){
	int i=0,j=0,k=0;
	char temp,a[N],turn[N];
	while((temp=getchar())!='\n'){
		a[i]=temp;
		i++;
	}
	int len=strlen(a);
	do{
		i++;
	}
	while(a[i]<'a'||a[i]>'Z');
	char mid;
	for(i=0;i<len;i++){
		if(a[i]>='a'&&a[i]<='Z'){
			turn[i]=a[i];
		}
	} 
	int l=strlen(turn);
		for(j=0;j<l;j++){
			a[len-j-1]=turn[j];
		}
		for(k=0;k<len;k++){
			printf("%c",a[k]);
		}
	return 0;
}

