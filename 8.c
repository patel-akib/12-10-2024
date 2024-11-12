#include<stdio.h>
int main(){
	printf("enter the number :");
	int num;
	scanf("%d",&num);
	int i;
	do{
		printf("%d*%d=%d\n",num,i,num*i);
		i++;
	}
	while(i<=10);
}
