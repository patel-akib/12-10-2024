#include<stdio.h>
int main(){
	aakib:
	printf("press 1 for pizza\n");
	printf("press 2 for burger\n");
	printf("press 3 for cocacola\n");
	printf("press 4 for rise\n");
	printf("press 5 for exit\n");
	int choice;
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		
		case 1:
			printf("your pizza order successfully\n");
			goto aakib;
			
			case 2:
			printf("your burger order successfully\n");
			goto aakib;
			
			case 3:
			printf("your cocacola order successfully\n");
			goto aakib;
			
			case 4:
			printf("your rise order successfully\n");
			goto aakib;
			
			case 5:
			printf("exited successfully\n");
			break;
			
			default:printf("invalid choice\n");
			goto aakib;
	}
	
}
