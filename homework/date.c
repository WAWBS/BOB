//Print a date in legal form(����ת�������ڼ����жϣ� 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
int main(void)
{int month, day ,year,y,c,m,d,w;
 printf("Enter date(mm/dd/yyyy):");
 scanf("%d/%d/%d",&month,&day,&year);
 printf("Dated this \n%d",day);
 
 switch (day){
 	case 1: case 21: case 31:
 		printf("st");break;
 	case 2: case 22:
 		printf("nd");break;
 	case 3: case 23:
 		printf("rd");break;
 	default:printf("th");break;
 }
 printf(" day of ");
 switch (month) {
 	case 1: printf("January");break;
 	case 2: printf("February");break;
 	case 3: printf("March");break;
 	case 4: printf("April");break;
 	case 5: printf("May");break;
 	case 6: printf("June");break;
 	case 7: printf("July");break;
 	case 8: printf("August");break;
 	case 9: printf("September");break;
 	case 10: printf("October");break;
 	case 11: printf("November");break;
 	case 12: printf("December");break;
}
printf("  %d\n",year);
y = year % 100;//�ꡡ��2015 ������15��
    c = year / 100;// ���ǰ��λ����2015��20
    m = month; d = day;
    if (m == 1 || m == 2) { //�ж��·��Ƿ�Ϊ1��2
        y--;
        m += 12;//ĳ���1��2��Ҫ������һ���13��14��������
   }
    w = y + y / 4 + c / 4 - 2 * c + 13 * (m + 1) / 5 + d - 1;//���չ�ʽ
    while (w < 0) w += 7;//ȷ������Ϊ��
    w %= 7;
   printf("�����������:����%d", w);
   return 0; 
     
 }
