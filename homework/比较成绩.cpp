#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void quicksort(int a[],int min,int max);
int split(int a[],int min,int max);
void sort_word(char *words[], int n);
int main(void)
{
	int n,i=0;
	scanf("%d",&n);
	char *grade;
	char ID[100][18];
	char name[100][10];
	int grade_1[n];
	for(i=0;i<n;i++){
		scanf("%s%s%s",name[i],ID[i],grade);
    if(strcmp(grade,"n/a")==0)
    continue;
    else{
    grade_1[i]=atoi(grade);
    split(name[i],ID[i],grade_1[i]);
   	quicksort(name[i],ID[i],grade_1[i]);
    printf("%s %s\n",name[n],ID[n]);
	printf("%s %s\n",name[0],ID[0]),	
}
return 0;
}
int split(char a[],int min,int max){
	int part_element=a[min];
	for(;;){
		while(min<max&&part_element<=a[max])
		max--;
		if(min>=max)break;
		a[min++]=a[max];
		while(min<max&&a[min]<=part_element)
		min++;
		if(min>=max)break;
		a[max--]=a[min];
	}
	a[max]=part_element;
	return max;
}
void quicksort(char a[],int min,int max){
	int mid;
	if(min>max)return;
	mid=split(a,min,max);
	quicksort(a,min,mid-1);
	quicksort(a,max+1,max);
}
void sort_word(char *words[], int n)
{
	int i = 0;
	int j = 0;
	char *tmp;
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(strcmp(words[j], words[j+1]) > 0 )
			{
				tmp = words[j];
				words[j] = words[j+1];
				words[j+1] = tmp;
			}
		}
	}
}

