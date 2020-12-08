//¹ÀËãeµÄÖµ
#include<stdio.h>
int main()
{int n,i;
 double e,a;
 e=1;
 a=1;
printf("Enter a number: ");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 a*=i;
 e+=1/a;
 }
   printf("e=%lf",e);
 } 
