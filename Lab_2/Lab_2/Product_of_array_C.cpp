#include "pch.h"

int Product_of_array_C(array<int>^ Array, int size) //����� ������������� �������� � �������
{
	int pr = 1;

	for (int i = 0; i < size; i++)
		pr *= Array[i];

	return pr;
}