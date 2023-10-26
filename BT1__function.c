/*
1. Input length and width of rectangle
2. Calculate area of rectangle has length and width
3. Calculate perimeter of rectangle has length and width
4. Display length, width, area, perimeter of rectangle to the screen.
Using functions you have written from 1 to 4 to input length and width of rectangle.
Calculate area and perimeter of rectangle. Display all information to the screen.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void inputLength_Width(int *Le, int *Wi);
int Area(int Le, int Wi);
int Perimeter(int Le, int Wi);
void display_All(int Le, int Wi);

void main(void){
	int Le;
	int Wi;
	
	int choice;
	do{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
	switch(choice){
		case 1: 
			inputLength_Width(&Le, &Wi);
			break;
		case 2:
			printf("\nArea: %d",Area(Le, Wi));
			break;
		case 3:
			printf("\nPerimeter: %d",Perimeter(Le, Wi));
			break;
		case 4:
			display_All(Le, Wi);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid Input");
			break;
		
		
		}
	
	
	
	}while(choice != 5);
	
//	//Input length and width
//	inputLength_Width(&Le, &Wi);
//	//Area
//	printf("\nArea: %d",Area(Le, Wi));
//	
//	//Perimeter
//	printf("\nPerimeter: %d",Perimeter(Le, Wi));
//	//Display all
//	display_All(Le, Wi);
	return ;
}

void inputLength_Width(int *Le, int *Wi){
	printf("\nNhap Length: ");
	scanf("%d",Le);
	
	printf("\nNhap Width: ");
	scanf("%d",Wi);
}

int Area(int Le, int Wi){
	return (Le * Wi);
}

int Perimeter(int Le, int Wi){
	return 2*(Le+Wi);
}

void display_All(int Le, int Wi){
	printf("\nLength: %d",Le);
	printf("\nWidth: %d",Wi);
	printf("\nArea: %d ",Area(Le, Wi));
	printf("\nPerimeter: %d",Perimeter(Le, Wi));
}






