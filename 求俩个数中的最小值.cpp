/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/09/14 22:40
	Description: 函数的形参和实参应用举例，求俩个数中的最小值 
*/
#include <stdio.h>
int main() 
{
	float a, b, c, n;
	float min(float, float);
	scanf("%f%f%f", &a, &b, &c);
	n = a;
	n = min(n, b);
	n = min(n, c);
	printf("min = %f\n", n);
	return 0;
}

float min(float x, float y)
{
	float z;
	if (x > y)
	{
		z = y;
	}
	else
	{
		z = x;
	}
	return z;
}
 
