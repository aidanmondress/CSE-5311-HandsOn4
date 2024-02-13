/*
 * p0.c
 *
 *  Created on: Feb 13, 2024
 *      Author: aimon
 */

#include <stdio.h>

int fib(int n)
{
     if(n)
    	 return 1;
     else if(n == 0)
    	 return 0;
     return fib(n-1) + fib(n-2);
}

int main()
{
	int n = 5;
	int x = fib(n);
	printf("Fibonacci of %d: %d\n", n, x);
	return 0;
}
