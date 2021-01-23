#include<stdio.h> 
int main(){
	double c,x=2,y=4;
	double *n;
	c=average(x,y);
	n=&c;
	printf("%d",*n);
	return 0;
}
double average(double a,double b){
	return (a+b)/2;
} 
