#include<stdio.h>
#include<string.h>
#include<ctype.h>
void revert(char *start,char *end){ //ʹ����������н���
	while(start<end){
		*start=*start^*end;
		*end=*start^*end;
		*start=*start^*end;
		start++;
		end--;
	}
}
int main(){
	char a[1024],*start;
	fgets(a,1024,stdin);
	int len=strlen(a);
	int i=0,j=0;
	while(i<len){		
		if(isalpha(a[i])){
			start=a+i;
			j=i+1;
			while(j<len){
				if(isalpha(a[j]))
					j++;   //j�Ƶ�ÿ���������һ����ĸ
				else 
					break;			
 
			}
			char *end=a+j-1;
			revert(start,end);		
 
		}
		i=j+1;  //i�Ƶ���������ĸ
		j++;
	}
	for(int i=0;i<len;i++)
		printf("%c",a[i]);
		printf("\n");
	return 0;
}

