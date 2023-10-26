#include <stdio.h>
/*
4. Using the functions you have written in 1-3, write a program to input a number
(between 0-100), input a choice(P or D) and either output the number as a
percentage or decimal number
*/
// Function to convert a number to a percentage
float to_percentage(int number) {
	return (float)number;
}

// Function to convert a number to a decimal
float to_decimal(int number) {
	return (float)number / 100.0;
}


int main(){
	int number;
	do
	{
		printf("\nInput Number(0 - 100): ");
		scanf("%d", &number);		
	}while(number < 0 || number > 100);

	fflush(stdin);
	char choice;
	printf("\nChoose P to find percentage:\n");
	printf("\nChoose D to find decimal:\n");
	printf("\nEntered your choice: ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'P':
			printf("\npercentage: %.2f", to_percentage(number));
			printf("%%");
			break;
		case 'D':
			printf("\ndecimal: %.2f", to_decimal(number));
			break;
		default:
			printf("Error: The type must be P or D.\n");
			break;
		
	}
	
	
	
	
	return 0;
}