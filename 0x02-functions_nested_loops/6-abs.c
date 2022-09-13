#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @n: int data type
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
