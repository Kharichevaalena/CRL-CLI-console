#include "pch.h"

void Task()
{
	int size_L = 6, size_C = 8, size_M = 7;

	array<int>^ Array_L = nullptr;
	array<int>^ Array_C = nullptr;
	array<int>^ Array_M = nullptr;

	Array_L = input_array(size_L, "L");
	Array_C = input_array(size_C, "C");
	Array_M = input_array(size_M, "M");

	int pr_L = Product_of_array_L(Array_L, size_L);
	Console::Write("Product 'L' array = ");
	Console::WriteLine(pr_L);
	int pr_C = Product_of_array_C(Array_C, size_C);
	Console::Write("Product 'C' array = ");
	Console::WriteLine(pr_C);
	int pr_M = Product_of_array_M(Array_M, size_M);
	Console::Write("Product 'M' array = ");
	Console::WriteLine(pr_M);

	double Y = Main_product(pr_L, pr_C, pr_M);

	Console::WriteLine("Y = L + C - (0,5 * M)");
	//std::cout << std::endl;
	Console::Write("Y = ");
	Console::WriteLine(Y);
}