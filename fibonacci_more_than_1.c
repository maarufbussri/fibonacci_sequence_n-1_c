#include <stdio.h>

//Fibonacci Sequence

int main()
{
	int n = 2; //n>1
	int m = 10; //Number of terms
	int F0 = 0; //F(0) = 0, initial value n<=1
	int F1 = 1; //F(1) = 1, initial value n<=1
	int Fn; //F(n)
	int Fn_2; //F(n-2)
	int Fn_1; //F(n-1)

	Fn_2 = F0; //F(n-2) = F(0), initial condition n=2
	Fn_1 = F1; //F(n-1) = F(1), initial condition n=2

	printf("%d %d ", F0, F1); //Display initial value  n<=1

	for (n; n <= m; n++)
	{
		Fn = Fn_2 + Fn_1; //F(n) = F(n-2) + F(n-1) Fibonacci recurrence relation
		Fn_2 = Fn_1; //F(n-2) = F(n-1), recursive formula
		Fn_1 = Fn; //F(n-1) = F(n), recursive formula
		printf("%d ", Fn); //Display fibonacci sequence n>1
	}

	return 0;
}
