#include<stdio.h>
int main(){
	float principal,rate,simple_interest;
	int time;
	printf("enter your principal amount : ");
	scanf("%f",&principal);
	printf("enter oyur rate of interest : ");
	scanf("%f",&rate);
	printf("enter the time of months : ");
	scanf("%d",&time);
	simple_interest=principal*rate*time/100;
	printf("simple interest is %f",simple_interest);
}
