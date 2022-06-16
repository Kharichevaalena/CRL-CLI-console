#include "pch.h"

array<int>^ input_array(int size, std::string name) //ввод элементов в массив
{
	String^ line;
	array<int>^ arr = gcnew array<int>(size);

	Console::Write("Input the array ");
	std::cout << name;
	Console::Write (" with ");
	Console::Write(size);
	Console::Write(" elements: ");
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
	{
		line = Console::ReadLine();
		arr[i] = Convert::ToInt32(line);
	}

	return arr;
}