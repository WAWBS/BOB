#include<stdio.h>
#include<string.h>
#include<ctype.h>
void revert(char *start,char *end){ //使用异或来进行交换
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
					j++;   //j移到每个单词最后一个字母
				else 
					break;			
 
			}
			char *end=a+j-1;
			revert(start,end);		
 
		}
		i=j+1;  //i移到单词首字母
		j++;
	}
	for(int i=0;i<len;i++)
		printf("%c",a[i]);
		printf("\n");
	return 0;
}

