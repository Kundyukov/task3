#pragma once
#include <math.h>
#include <iostream>
class Tabul
{
public:
	double left, right, step, x;
	double tabulation(double left, double right, double step, double x)
	{
		double y;
		y = sqrt((pow(x, 2)) - 4 * log(x));
		return y;
	}
};

