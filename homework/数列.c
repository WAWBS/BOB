#include<stdio.h>
int main(void)
{
	double a[10]; 
	int i;
	
	while(1){
		
    for(i=0;i<5;i++){
    	scanf("%lf",&a[i]);
	}
	
	if(a[1]==0&&a[3]==0&&a[0]==0&&a[2]==0&&a[4]==0) 
	  return 0;
	  
	if(a[1]-a[0]==a[2]-a[1]&&a[3]-a[2]==a[4]-a[3]&&a[3]-a[2]==a[2]-a[1]&&a[2]){
		printf("case one\n");
		for(i=5;i<10;i++){
			a[i]=a[i-1]+a[2]-a[1];
			printf("%.0lf ",a[i]);
		}
		printf("\n");
    }
    if(a[0]*a[2]==a[1]*a[1]&&a[1]*a[3]==a[2]*a[2]&&a[2]*a[4]==a[3]*a[3]){
    	printf("case two\n");
    	for(i=5;i<10;i++){
    		a[i]=a[i-1]*(a[2]/a[1]);
    		printf("%.0lf ",a[i]);
		}
		printf("\n");
    }
    if(a[2]==a[0]+a[1]&&a[4]==a[2]+a[3]&&a[3]==a[1]+a[2]){
    	printf("case three\n");
    	for(i=5;i<10;i++){
    		a[i]=a[i-1]+a[i-2];
    		printf("%.0lf",a[i]);
		}
		printf("\n");
    }
	}
}
