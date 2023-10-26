/*
1. Function to input matrix has n rows and m column.
2. Function to display given matrix to the screen.
3. Function to sort all columns of matrix ascending.
4. Function to calculate total of even elements of matrix.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void menu()
{
	printf("\n1. Function to input matrix has n rows and m column.");
	printf("\n2. Function to display given matrix to the screen.");
	printf("\n3. Function to sort all columns of matrix ascending.");
	printf("\n4. Function to calculate total of even elements of matrix.");
	return;
}

void input_matrix_rows_column(int a[][100], int *n, int *m);
void display_matrix_given(int a[][100], int n, int m);
void sort_all_column_row(int a[][100], int n, int m);
int calculate_total_element_matrix(int a[][100], int n, int m);
void menu();

void main(void)
{
	int a[100][100];
	int n,m;
	int choice;
	
	do
	{	
		menu();
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				input_matrix_rows_column(a, &n, &m);
				break;
			case 2:
				display_matrix_given(a, n, m);
				break;
			case 3:
				sort_all_column_row(a,n,m);
				display_matrix_given(a, n, m);
				break;
			case 4:
				printf("\nTotal elements matrix: %d",calculate_total_element_matrix(a, n, m));
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid input");
				break;
		}
		
	}while(choice != 5);
	
	
	return;
}

//Input matrix
void input_matrix_rows_column(int a[][100], int *n, int *m)
{
	int i;
	int j;
	
	printf("\nInput number of row: ");
	scanf("%d",n);
	
	printf("\nInput number of column: ");
	scanf("%d",m);
	
	for(i = 0; i<*n; i++)
	{
		for(j = 0; j<*m; j++)
		{
			printf("\nElements a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
}

void display_matrix_given(int a[][100], int n, int m)
{	
	int i;
	int j;
	printf("\nDisplay matrix:\n");
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<m; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}


void sort_all_column_row(int a[][100], int n, int m)
{	
	printf("\nAscending column matrix:\n");
  	for (int i = 0; i < m; i++) 
	{
    	for (int j = 0; j < m - 1; j++) 
		{
      		for (int k = j; k < m; k++) 
			{
        		if (a[j][i] > a[k][i]) 
				{
          			int temp = a[j][i];
          			a[j][i] = a[k][i];
          			a[k][i] = temp;
        		}
      		}
    	}
  	}
	
	
}


int calculate_total_element_matrix(int a[][100], int n, int m)
{
	int sum = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			sum += a[i][j];
		}
	}
	
	return sum;
	
}



