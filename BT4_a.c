#include <stdio.h>
#include <conio.h>
void DoSomething(int Num2);

int main(void)
{
	int Num1 = 0;
	int Num2 = 3;
	printf("\nInside main: Num1 = %d Num2 = %d", Num1, Num2);
	DoSomething(Num2);
	printf("\nInside main: Num1 = %d Num2 = %d", Num1, Num2);
	return 0;
}

void DoSomething(int Num2)
{ 
	int Num1 = 0;
	Num1 = Num1 + 5;
	printf("\nInside DoSomething: Num1 = %d Num2 = %d", Num1, Num2);
	return;
}