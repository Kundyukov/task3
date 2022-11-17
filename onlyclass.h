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
		//y = 2 * ((abs(x + 3)) / (x + 3)) * x + 6;
		return y;
	}
};

