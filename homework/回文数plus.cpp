#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 100
//int *pan(char a[]){
//	int len,i=0;
//	len=strlen(a);
//	for(i=0;i<len;i++){
//		if(a[i]!=a[len-i-1]){
//			return 0;
//			break;
//		}
//		else
//		return 1;
//	}
//}//找回文数 
int max(int*temp){
      int j,i=0;
	  int k=temp[0];
      for(i=0;i<N;i++){
      	if(k<temp[i]){
      		k=temp[i];
			  j=i;
		  }
	  }
	  return j;
}
int*pan(char**b){
	int i=0,j=0;
	int*c;
	c=(int*)calloc(N,sizeof(int)*N);
	for(int i=0;b[i]!=0;i++){
		if(b[i][0]=='0')
		b[i]="-";
	}
	for(j=0;b[i]!=0;j++){//从一个开始搜寻。 
		if((b[i][j]==b[i][strlen(b[i])-1-j])&&(b[i][j]>='0'&&b[i][j]<='9')&&(b[i][strlen(b[i])-1-j]>='0'&&b[i][strlen(b[i])-1-j]<='9')){
			if(j<strlen(b[i])-1-j)
			continue;
			if(j>=strlen(b[i])-1-j){
				c[i]=1;
				j=-1;
				i++;
			    continue;
			}
		}
	  else{
	   	       c[i]=0;
	   	        j=-1;
				i++;
	   	       continue ;
	   }
	}
	return c;
	free(c);
} //回文判断 
char**num(char*a){
	char **b;
	int i=0,k=0;
	b=(char**)calloc(N,sizeof(char*)*N);
	for(int i=0;i<N;i++)
	b[i]=(char*)calloc(N,sizeof(char)*N);
	for(int j=0;a[j]!=0;j++){
		if((a[j]>='0'&&a[j]<='9')&&(a[j+1]>='0'&&a[j+1]<='9')){
		b[i][k]=a[j]; 
		 k++;
		continue;
	}
	  else  if((a[j-1]>='0'&&a[j-1]<='9')&&(a[j]>='0'&&a[j]<='9')&&(a[j+1]<'0'||a[j+1]>'9')){
	    b[i][k]=a[j]; 
	    b[i][k+1]=0;
	    k=0;
	    i++;
	    continue;
		}
	}
	return b;
	free(b);
}//取出数字 
int main(){
	char a[N];int temp[N]={0}; 
	int i=0;
	while((a[i]=getchar())!=EOF)
	i++;
	a[i]=0;
	char**b=num(a);
	int*c=pan(b);//b[i]中是回文数c[i]就是1
	for(int i=0;i<N;i++){
		if(c[i]==1){
			temp[i]=1;
		}
	 //回文的都加一； 
		}
	for(int i=0;i<N;i++){
	for(int j=i+1;j<N;j++){
			if(c[i]==1){
			if(strcmp(b[i],b[j])==0){
			temp[i]++; 
			} 
			} 
		} 
	}
	for(int i=0;i<N;i++){
		if(temp[i]==0){
			if(i==N-1){
				printf("None\n");
				return 0;
			}
			else
			continue;
		}
		else
		 break;
	}//检查
  int j=max(temp);
  char **d;
  d=(char**)calloc(N,sizeof(char*)*N);
  for(int i=0;i<N;i++)
  d[i]=(char*)calloc(N,sizeof(char)*N);
  int l=0;
  char e[N];

   for(int i=0;i<N;i++){
  	if(temp[i]==temp[j]){//j代表最大的 
  		strcpy(d[l],b[i]);
  		l++;
	}
	  }
	  strcpy(e,d[0]);
	  for(int i=0;i<N;i++){
	  	for(int j=i;j<N;j++){
	  	if((strlen(d[i])>strlen(d[j]))||(strlen(d[i])==strlen(d[j]))&&(strcmp(d[i],d[j])==1)){
              strcpy(e,d[i]);	  		
			  strcpy(d[i],d[j]);
	  		  strcpy(d[j],e);
	  	}
		  }
	  }
	  for(int i=0;i<N;i++){
	  	if(d[i][0]>'0')
	  	printf("%s %d\n",d[i],temp[j]);
	  }
	  return 0;
  }
