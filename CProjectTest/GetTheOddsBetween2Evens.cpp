#include <stdio.h>
#include "stdafx.h"
#include <math.h>

int checkPrimeNumber(int n);
int main()
{
	int n1, n2, i, flag;
	printf("Enter two positive integers: ");
	scanf("%d %d", &n1, &n2);
	printf("Prime numbers between %d and %d are: ", n1, n2);

	for (i = n1 + 1; i<n2; ++i)
	{
		// i is a prime number, flag will be equal to 1
		flag = checkPrimeNumber(i);

		if (flag == 1)
			printf("%d ", i);
	}

	if(checkArmstrongNumber(n1)==0)
		printf("n1 is amostop number");
	scanf("%s");
	return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n)
{
	int j, flag = 1;

	for (j = 2; j <= n / 2; ++j)
	{
		if (n%j == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int checkArmstrongNumber(int number)
{
	int originalNumber, remainder, result = 0, n = 0, flag;

	originalNumber = number;

	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		result += pow(remainder, n);
		originalNumber /= 10;
	}

	// condition for Armstrong number
	if (result == number)
		flag = 1;
	else
		flag = 0;

	return flag;
}