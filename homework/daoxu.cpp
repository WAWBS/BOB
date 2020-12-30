#include<stdio.h>
#include<string.h>
#define N 1000
int main(){
	int i=0,j=0,k=0;
	char temp,a[N],b[N][N],c[N];
	void fanxiang(char a[]);
	while((temp=getchar())!='\n'){
		a[i]=temp;
		i++;
	}
	int len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]<='Z'&&a[i]>='a'){
			b[j][i]=a[i];
		}
		else{
		j+=j;
		b[j][i]=a[i];	
		}
	}
	for(k=0;k<=j;k++){
		fanxiang(b[k]);
	}
	int t=0;
	//for(t=0;t<strlen(b[0]);t++)
//		printf("%c ",b[0][t]);
	for(k=0;k<=j;k++){
		printf("%s",b[k]);
	}
	return 0;
}
void fanxiang(char a[]){
	int len=strlen(a);
	int i=0;
	char temp;
	for(i=0;i<len/2;i++){
		temp=a[i];
		a[i]=a[len-1-i];
		a[len-i-1]=temp;
	} 
} 
