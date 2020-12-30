#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  // 有n组数据
    for (i = 0; i < n; i++) {
    int a[4];
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	int min=a[0],max=a[1];
	if(max<=min){
	max=a[0];
	a[0]=a[1];
	a[1]=max;
	}
	max=a[2];
	min=a[1];
	if(max<=min){
		max=a[1];
	a[1]=a[2];
	a[2]=max;
	}
	max=a[3];
	min=a[2];
	if(max<=min){
		max=a[2];
	a[2]=a[3];
	a[3]=max;
	}
	 min=a[0],max=a[1];
	if(max<=min){
	max=a[0];
	a[0]=a[1];
	a[1]=max;
	}
	max=a[2];
	min=a[1];
	if(max<=min){
		max=a[1];
	a[1]=a[2];
	a[2]=max;
	}
	max=a[3];
	min=a[2];
	if(max<=min){
		max=a[2];
	a[2]=a[3];
	a[3]=max;
	}
	min=a[0],max=a[1];
	if(max<=min){
	max=a[0];
	a[0]=a[1];
	a[1]=max;
	}
	max=a[2];
	min=a[1];
	if(max<=min){
		max=a[1];
	a[1]=a[2];
	a[2]=max;
	}
	max=a[3];
	min=a[2];
	if(max<=min){
		max=a[2];
	a[2]=a[3];
	a[3]=max;
	}
	 min=a[0],max=a[1];
	if(max<=min){
	max=a[0];
	a[0]=a[1];
	a[1]=max;
	}
	max=a[2];
	min=a[1];
	if(max<=min){
		max=a[1];
	a[1]=a[2];
	a[2]=max;
	}
	max=a[3];
	min=a[2];
	if(max<=min){
		max=a[2];
	a[2]=a[3];
	a[3]=max;
	}
	printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
	}
    return 0;

}

