#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,i=0,t=0;
	char a[20];
	char form[21][31];
	int wide,d[20],wid1=0,wid2=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&d[i]);
		scanf("%c",&a[i]);
}
	for(i=0;i<m;i++){
		if(d[i]>0&&wid1<d[i]){
			wid1=d[i];//����
		}
		else if(d[i]<=0&&wid2>d[i]){
			wid2=d[i]; //���� 
		}
	}
	wide=wid1-wid2+1;  //�������е��������ֵ�ֱ��ҳ���ȷ������С 
	for(t=0;t<m;t++){
		if(d[t]>0){
			for(i=0;i<wide;i++){
			    if(i<wid1-d[t]){
				    form[i][t]=' ';
				}
				else if(i>=wid1-d[t]&&i<wid1){
					if(a[t]=='\n'||a[t]==' '){
						form[i][t]='+';
					}
					else{
						form[i][t]=a[t];
					}	
				}
				else if(i==wid1){
						form[i][t]='-';
				}
				else {
						form[i][t]=' ';
				}
			}
		}
		else{
			for(i=0;i<wide;i++){
				if(i<wid1){
					form[i][t]=' ';
				}
				else if(i==wid1){
					form[i][t]='-';
				}
				else if(i>wid1&&i<=wid1-d[t]){
					if(a[t]==' '||a[t]=='\n'){
						form[i][t]='+';
					}
					else{
						form[i][t]=a[t];
					}	
				}
				else{
				form[i][t]=' ';	
				}
			}
		}
	}
	for(i=0;i<wide;i++){
		if(i==wid1){
			for(t=0;t<m;t++){
				if(t==m-1){
				printf("%c",form[i][t]);	
				}
				else{
				printf("%c-",form[i][t]);	
				}
			}
		}
		else{
			for(t=0;t<m;t++){
				printf("%c ",form[i][t]);
			}
		}
		printf("\n");
	} 
	return 0;	
} 
