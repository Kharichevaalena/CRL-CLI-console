#include "pch.h"

void Main_menu()
{
	String^ line;
	char mode;
	bool flag = true;

	while (flag)
	{
		Console::WriteLine("Choose the mode of the program.");
		Console::WriteLine("1 - run the program.");
		Console::WriteLine("0 - exit");

		line = Console::ReadLine();
		mode = Convert::ToChar(line);

		switch (mode)
		{
		case '1':
			Task();
			break;
		case '0':
			flag = false;
			break;
		default:
			Console::WriteLine("Mode selection error! Please choose 1-3 to go to the tasks or 0 to exit the program.\n");
		}
	}
}