//�ֽ��û������ISBN��Ϣ 
#include<stdio.h>
int main()
{int a,b,c,d,e;
printf("������ISBN��Ϣ(x-x-x-x-x):");
scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
printf("GS1 prefix:%d\nGroup identifier:%d\nPublish code:%d\n",a,b,c);
printf("Item number:%d\nCheck digit:%d",d,e);
return 0;
 } 
