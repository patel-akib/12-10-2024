#include<stdio.h>
int main(){
	printf("enter the number :");
	int num;
	scanf("%d",&num);
	int i;
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",num,i,num*i);
	}
}
