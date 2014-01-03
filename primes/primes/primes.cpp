// primes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	return 0;
}
