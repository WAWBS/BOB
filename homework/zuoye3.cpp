#include<stdio.h>
#include<string.h>
int main()
{
	int n, len;
	int i = 1;
	scanf("%d", &n);
	n < 10;
	for(i = 1; i <= n; i++){
		char str1[100];
		scanf("%s", str1);
		int len = strlen(str1);
		if(len < 3 || len == 4){
			printf("NO\n");
		}
		else if(len == 3){
			if(strcmp(str1, "SCU") == 0)
				printf("YES\n");
			else printf("NO\n");
		}
		else if(len > 4){
			int t=0, m = 1, h;
			if(str1[t] != 'A')
			printf("NO\n");
			else {
			{for(t = 1; str1[t] == 'A'; t++)
			m++;}
			h = m + 3;
			if(str1[m]=='S'&&str1[m+1]=='C'&&str1[m+2]=='U')
			    if(str1[h]=='A'){
			        if(str1[++h]=='A'){
			          printf("YES\n");}
			        else if(str1[h]=='\0')
			        printf("YES\n");
			              else printf("NO\n");}
			    else printf("NO\n");
			else printf("NO\n");}
		}
	}
	return 0; 
	}
