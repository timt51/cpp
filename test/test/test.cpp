// test.cpp : Defines the entry point for the console application.
//

// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
// #include <string>
// #include <sstream>
#include <math.h>
#include <algorithm>
#include <array>
#include <windows.h>
#include <ppl.h>

// using namespace concurrency;

unsigned long long is_prime(unsigned long long number)
{
	int upper = int(sqrt(number));
	for (unsigned long long n = 2; n < upper; n++) {
		if (number % n == 0) {
			return n;
	 	}
	}

	return 0;
}

int main()
{
	/* std::string stringnumber;
	unsigned long long longnumber;

	std::cout << "Number:";
	std::getline (std::cin, stringnumber);
	std::stringstream(stringnumber) >> longnumber;
	std::cout << "10 times what you typed: " << longnumber * 10 << std::endl;
	std::cout << is_prime(longnumber* longnumber - longnumber + 37);
	*/
	unsigned long long a[10000];
	unsigned long long n = 100000;
	std::generate(std::begin(a), std::end(a), [&] {
		return n++;
	});

	// for (n; n < j; n++) {
	// 	unsigned long long c = is_prime(n * n - n + 37);
	// 	if (c > 1000) {
	// 		std::cout << c << "\n";
	// 	}
	// }

	concurrency::parallel_for_each(std::begin(a), std::end(a), [&](unsigned long long n) {
		unsigned long long c = is_prime(n * n - n + 37);
		if (c > 1000) {
			std::cout << c << "\n";
		}
	});

	return 0;
}
