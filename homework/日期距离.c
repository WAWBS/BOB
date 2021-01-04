#include<stdio.h>
#include<string.h>
#include<math.h>
struct date{
	int year;
	int month;
	int day;
};
int main(void){
	struct date s1,s2;
	int day_date(struct date s);
	int diff(struct date s1, struct date s2);
	scanf("%d/%d/%d",&s1.year,&s1.month,&s1.day);
	int wow;
	wow=pan(s1.year );
	if(s1.year>12||s1.day==s1.year)
	{
		switch(s1.month)
		{ 
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
		printf(" %d, %d\n",s1.day ,s1.year+2000);
	}
	else if(s1.day >30||(s1.month ==29&&s1.day !=2)||((s1.month ==4||s1.month ==6||s1.month ==9||s1.month ==11)&&s1.month ==31)||(wow==1&&s1.month ==31)||(wow==1&&s1.month ==30)||(wow==0&&s1.month ==31)||(wow==0&&s1.month ==30)||(wow==0&&s1.month ==29)){
		switch(s1.month)
		{ 
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
		printf(" %d, %d\n",s1.day ,s1.year+2000);
	}
	else {
		s2.month =s1.year;
		s2.day=s1.month;
		s2.year=s1.day;
		s1.year+=2000;
		s2.year+=2000;  
		printf("%d\n",diff(s1,s2));  
	}
	return 0;
}
int pan(int year){
	if(year%400==0){
		return 1;
	}
	else if((year%4==0)&&(year%100!=0)){
		return 1;
	}
	else return 0;
}
int day_on_month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int day_date(struct date s)				//以0000-00-00时为基准，计算过去了多少天
{
	int sum=0;
	int i=0;								//统计天数
	for ( i = 0; i < s.year; i++)      //年份
	{
		if (pan(i))				//判断是否是闰年
			sum += 366;
		else sum += 365;
	}

	if (pan(i))
		day_on_month[2]=29;                //闰年二月为29天
	else
		day_on_month[2]=28;
	int k=1;                 //这步不可以省略
	for ( k = 1; k < s.month; k++)		 //月份
		sum += day_on_month[k];

	return sum+s.day;						 //加上天数 返回
}
int diff(struct date s1, struct date s2){
	return abs(day_date(s1)-day_date(s2));
} 
