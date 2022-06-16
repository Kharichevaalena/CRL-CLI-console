#include "pch.h"

double Main_product(int pr_l, int pr_c, int pr_m)
{
	double Y = 0;

	Y = pr_l + pr_c - (double(pr_m)/2);

	return Y;
}