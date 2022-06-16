#include "pch.h"

int Product_of_array_L(array<int>^ Array, int size) //поиск максимального элемента в массиве
{
	int pr = 1;

	for (int i = 0; i < size; i++)
		pr *= (Array[i] - 2);

	return pr;
}