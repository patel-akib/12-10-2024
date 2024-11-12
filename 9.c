#include<stdio.h>
int main(){
	printf("enter the number :");
	int num;
	scanf("%d",&num);
	int i=1;
	while(i<=10){
		printf("%d*%d=%d\n",num,i,num*i);
		i++;
	}

}
