#include<stdio.h>
#include"coffee.h"
#include<string.h>
#include<stdlib.h>
int main(){

	int choice ;
do {

	  system("cls");
		printf("                Welcome to CAR'S CAFEE.          \n ");
	  printf("          +=============================+          \n\n");
	  printf("  -- Please select the meal that you would like to have. -- \n\n");
	   printf("\t\t 1) COFFEE\n");
	  printf("\t\t 2) MILKSHAKE\n");
	  printf("\t\t 3) bill\n");
	  printf("\t\t 4) exit\n\n");
	  printf("Enter your choice here : ");
	  scanf("%d", &choice);
	  fflush(stdin);
		switch(choice)
		{
			case 1:
				COFFEE();
			break;
			case 2:
				MILKSHAKE();
				break;
			case 4:
			    printf("exitting\n");
				break;
			case 3:
				checkbill();
				break;
				
			default:
				printf("\n invalid choice");
		}
		printf("\n");
		system("pause");
	} 
	while(choice !=4);
	return -1;
	
	

}
