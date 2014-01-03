// Fib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <iostream>

using namespace std;


/* Fibonacci: recursive version */
int Fibonacci_R(int n)
{
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	else return Fibonacci_R(n - 1) + Fibonacci_R(n - 2);
}

// iterative version
int Fibonacci_I(int n)
{
	long double fib [] = { 0, 1, 1 };
	for (int i = 2; i <= n; i++)
	{
		fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
		cout << "fib(" << i << ") = " << fib[i % 3] << endl;
	}
	return fib[n % 3];
}

int main(void)
{
	int a = 0;
	while (true) {
		cout << "a = ";
		cin >> a;

		// or calculate fib(a) once and output the intermediate results from the looping version
		cout << "From iterative function" << endl;
		Fibonacci_I(a);
		cout << (NULL == 0);
		cout << endl;
	}
}