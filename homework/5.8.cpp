//将成绩转化为字母表示的等级 
#include<stdio.h>
int main()
{int a,b;
 printf("Enter numerial grade:");
 scanf("%d",&a);
 b=(a-a%10)/10;
 if (a>100||a<0)//排除其他不合法输入的数 
 printf("Illegal number");
 else
 switch(b){
 case 0: case 1: case 2 : case 3: case 4: case 5:
 	printf("Letter grade:F");break;
 case 6: printf("Letter grade:D");break;
 case 7: printf("Letter grade:C");break;
 case 8: printf("Letter grade:B");break;
 case 9: case 10:  printf("Letter grade:A");break;
  }  
  return 0;
 } 
