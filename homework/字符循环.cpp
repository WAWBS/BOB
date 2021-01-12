#include<stdio.h>
#include<string.h>
int main(){
	char words[9999];
	int a,n,i=0;
	scanf("%d\n",&a);	                                  
	fgets(words, 9999, stdin);
	n=strlen(words);
	n = n - 1;
	for(i=0;i<n;i++){
		if(i<a){
			printf("%c",words[n-a+i]);
		}
		else
		printf("%c",words[i - a]);
	}
	return 0;	
}
