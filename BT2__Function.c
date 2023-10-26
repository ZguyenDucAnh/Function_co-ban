/*
1. Input three integers from the keyboard
2. Find min and max of three given integers.
3. Calculate minus of square max and square min
4. Find and display to the screen all divisors of three given integers.
Write a C program uses functions you have written from 1 to 4 to input three integers
from the keyboard find and display to the screen min and max of three given integers,
calculate and display to the screen minus of square max and square min, find and display
to the screen all divisors of three given integers
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int input_three_int(int *a, int *b, int *c);
int min_three_int(int a, int b, int c, int min);
int max_three_int(int a, int b, int c, int max);
void all_divisors_given(int n);
void menu();

void main(void)
{	
	//Menu
	menu();
	// 3 integers
	int a;
	int b;
	int c;
	//min and max
	int min;
	int max;
	//choice
	int choice;
	do
	{
		printf("\nInput your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				input_three_int(&a, &b, &c);
				break;
			case 2:
				printf("\nMin la: %d",min_three_int(a, b, c, min));
				printf("\nMax la: %d",max_three_int(a, b, c, max));
				break;
			case 3:
				printf("\nSquare max: %d", (int)pow(max_three_int(a, b, c, max), 2));
				printf("\nSquare min: %d", (int)pow(min_three_int(a, b, c, min), 2));
				printf("\nminus of square max and square min: %d",((int)pow(max_three_int(a, b, c, max), 2)) - ((int)pow(min_three_int(a, b, c, min), 2)) );
				break;
			case 4:
				all_divisors_given(a);
				all_divisors_given(b);
				all_divisors_given(c);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\nInvalid input");
				break;
				
		}
	}while(choice != 5);

	return;
}
// Function input
int input_three_int(int *a, int *b, int *c)
{
	printf("\nNhap a: ");
	scanf("%d",a);
	
	printf("\nNhap b: ");
	scanf("%d",b);
	
	printf("\nNhap c: ");
	scanf("%d",c);
	
}
// Function find min and max
int min_three_int(int a, int b, int c, int min)
{
	min = a;
	if(a <= b && a <= c)
	{
		min = a;
	}
	
	else if(b <= a && b <= c)
	{
		min = b;
	}
	
	else if(c <= a && c <= b)
	{
		min = c;
	}
	
	return min;
}

int max_three_int(int a, int b, int c, int max)
{
	max = a;
	if(a >= b && a >= c)
	{
		max = a;
	}
	
	else if(b >= a && b >= c)
	{
		max = b;
	}
	
	else if(c >= b && c >= a)
	{
		max = c;
	}
	
	return max;
}

// Function find all divisor
void all_divisors_given(int n)
{	
	printf("\nAll divisors given of %d is:\n",n);
	int i = 1;
	for(i ; i<=n; i++)
	{
		
		if (n % i == 0)
		{
			printf("%d ",i);
		}
	}
	
	
	
}
// Function call menu
void menu()
{
	printf("\n1. Input three integers from the keyboard");	
	printf("\n2. Find min and max of three given integers");
	printf("\n3. Calculate minus of square max and square min");
	printf("\n4. Find and display to the screen all divisors of three given integers");
	return;
}

