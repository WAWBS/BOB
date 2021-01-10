#include<stdio.h>
#include<string.h>
#define M 100
int main(void){
	int N,i;
	scanf("%d",&N);
	N<10&&N>1; 
	i=0;
	for(i=0;i<N;i++){
	char str[M];
		scanf("%s",str);
		if(strlen(str)<3||strlen(str)==4)
		printf("NO\n");
	    else if(strlen(str)==3){
			if(strcmp(str,"SCU")==0)
			printf("YES\n");
			else
			printf("NO\n");
		}
	    else if(strlen(str)>4){
	    	int c=1,a=0;
	    	if(str[a]!='A')
	    	printf("NO\n");
			else {
	         {for(a=1; str[a]=='A'; a++)
			c++;}
			int b;
			b = c+ 3;
			if(str[c]=='S'&&str[c+1]=='C'&&str[c+2]=='U')
			    if(str[b]=='A'){
			        if(str[++b]=='A'){
			          printf("YES\n");}
			        else if(str[b]=='\0')
			        printf("YES\n");
			              else printf("NO\n");}
			    else printf("NO\n");
			else printf("NO\n");}
		}
	}
	return 0;
	}
