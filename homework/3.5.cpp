//将输入的1~16的数字排列为4X4的形式 
#include<stdio.h>
int main()
{int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,x1,x2,x3,x4,y1,y2,y3,y4,z1,z2;
printf("请按任意次序输入整数(1~16)(数字用，隔开):");
scanf("%d，%d，%d，%d，%d，%d，%d，%d，%d，%d，%d，%d，%d，%d，%d，%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15,&a16);
printf("\t%d\t%d\t%d\t%d\n \t%d\t%d\t%d\t%d\n \t%d\t%d\t%d\t%d\n \t%d\t%d\t%d\t%d\n",a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16);
x1=a1+a2+a3+a4;
x2=a5+a6+a7+a8;
x3=a9+a10+a11+a12;
x4=a13+a14+a15+a16;
y1=a1+a5+a9+a13; 
y2=a2+a6+a10+a14;
y3=a3+a7+a11+a15;
y4=a4+a8+a12+a16;
z1=a1+a6+a11+a16;
z2=a4+a7+a10+a13;//求横竖斜列的和 
printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d",x1,x2,x3,x4,y1,y2,y3,y4,z1,z2);
return 0;
}
