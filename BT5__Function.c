/*
1. Enter the size and integer array from the keyboard.
2. Display array to the screen.
3. Find and display to the screen min positive and max negative number.
4. Count square number in the array. Display result to the screen.
5. Calculate and display to the screen total prime number in the array.
6. Sort array descending and display it after sorting.
7. Exit from program
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//init function
void menu();

int input_the_size_array(int a[100], int *n); //D
void Display_array(int a[100], int n); //D

int  min_positive(int a[100], int n); //D
int  max_negative(int a[100], int n); //D

int count_square_number(int a[100], int n); //D
int check_ChinhPhuong2(int n); //D

int check_ChinhPhuong2(int n);
void total_prime_number(int a[100], int n);

void array_descending_(int a[100], int n); //D






// Main
void main(void){
	menu();
	int n, a[100], min_pos, max_neg;
	int choice;
	do
	{
		printf("\n\nEntered your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				input_the_size_array(a, &n);
				break;
			case 2:
				Display_array(a, n);
				break;
			case 3:
				// So duong nho nhat trong mang
				min_pos = min_positive(a, n);	
				printf("\nMin positive: %d\n", min_pos);
				
				// So am lon nhat trong mang
				max_neg = max_negative(a, n);
  				printf("\nMax negative: %d\n", max_neg);
  				break;
  			case 4:
  				printf("\nCount square number in array: %d",count_square_number(a, n));
  				break;
  			case 5:
  				total_prime_number(a, n);
  				break;
  			case 6:
  				array_descending_(a, n);
  				break;
  			case 7:
  				printf("Exit.");
  				exit(0);
  				break;
  			default:
  				printf("\n!Invalid Input!");
  				break;
		}
	}while (choice != 7);

	return;
}

// Function call input size
int input_the_size_array(int a[100], int *n)
{
	printf("\nInput size of array: ");
	scanf("%d",n);
	
	for(int i = 0; i<*n; i++){
		printf("\narr[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

// Function Display array
void Display_array(int a[100], int n)
{	
	printf("\nDisplay Array:\n");
	for(int i = 0; i<n; i++)
	{
		printf("%d ",a[i]);	
	}
}
//Function call array descending

void array_descending_(int a[100], int n)
{	
	printf("\nArray descending:\n");
	int temp;
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i = 0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}


// Function call max negative
int  max_negative(int a[100], int n)
{	
	int max_neg;
	max_neg = INT_MIN; // so am lon nhat
	for(int i = 0; i<n; i++)
	{
		if(a[i] < 0 && a[i] > max_neg)
		{
			max_neg = a[i];
		}
	}
	
	return max_neg;
}


// Function call min positive
int  min_positive(int a[100], int n)
{	
	int min_pos;
	min_pos = INT_MAX; // so duong nho nhat
	for(int i = 0; i<n; i++){
		if(a[i] > 0 && a[i] < min_pos)
		{
			min_pos = a[i];
			
		}
	}
	
	
	return min_pos;
}

//Count square number
int count_square_number(int a[100], int n)
{
    int count = 0;
    
    for(int i=0;i<n;i++){
        if(check_ChinhPhuong2(a[i]) == 1){
            count++; 
        }
    }
    
    return count;
}

int check_ChinhPhuong2(int n){
    int x = sqrt(n);
    return x*x == n ? 1:0;
}

//Function call total prime number
int is_prime(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

void total_prime_number(int a[100], int n)
{	
	int m; 
  	int sum = 0;
  	for (int i = 0; i < n; i++)
	{
    	if (is_prime(a[i])) sum += a[i];
  	}
  	printf("Total of prime number in array: %d\n", sum);

}



//Function call menu
void menu()
{
	printf("\n1. Enter the size and integer array from the keyboard");
	printf("\n2. Display array to the screen");
	printf("\n3. Find and display to the screen min positive and max negative number");
	printf("\n4. Count square number in the array. Display result to the screen");
	printf("\n5. Calculate and display to the screen total prime number in the array.");
	printf("\n6. Sort array descending and display it after sorting");
	printf("\n7. Exit from program");
	
	
}
