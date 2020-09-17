#include<iostream>
#include <windows.h>
#include<string>

int main(/*int ac, char** av*/)
{
	/*float valueA;
	float valueB;
	int action;
	float result;
	int ecrit;
	//this is how you can output something ont the console !
	std::cout << "Hello world!";
	std:: cout << " ";
	std::cout << "je te pisse dessus !\n";

	std::cout << "ecrit un nombre:\n";
	std::cin >> ecrit;
	std::cout << "tu as ecrit " << ecrit << "\n";
	system ("exit");

	int a = 3;
	int b = 2;
	int c = 0;

	c = a + b;
	std::cout << c << "\n";
	c = a - b;
	std::cout << c << "\n";
	c = a * b;
	std::cout << c << "\n";
	c = a / b;
	std::cout << c << "\n";
	c = c + 1;
	std::cout << c << "\n";
	c = a - c * b;
	std::cout << c << "\n";
	return c;

	std::cout << "Hello, please write the first number.\n";
	std::cin >> valueA;
	std::cout << "1 for Add, 2 for Subtract, 3 for Multiply or 4 for Divide.\n";
	std::cin >> action;
	std::cout << "please write the second number. \n";
	std::cin >> valueB;

	if (action == 1)
	{
		result = valueA + valueB;
		std::cout << "the addition is " << result << ".\n";
	}
	else if (action == 2)
	{
		result = valueA - valueB;
		std::cout << "the subtraction is " << result << ".\n";
	}
	else if (action == 3)
	{
		result = valueA * valueB;
		std::cout << "the multiplication is " << result << ".\n";
	}
	else if (action == 4)
	{
		result = valueA / valueB;
		std::cout << "the division is " << result << ".\n";
	}
	else
	{
		MessageBox(nullptr, "Wrong number fonction", "ERROR!", MB_ICONEXCLAMATION);
	}
	// std::string greeting = "Hello world";
	// std::string name = "john";
	// std::string full_text = greeting + " " + name;
	// std::cout << full_text;
	// std::cout << greeting.append(" ").append(name);
	// std::cout << full_text;
	// const int value = 5;
	// std::string apple_count = std::to_string(value) + " apples";
	// std::cout << "you have " << apple_count << "\n";
	// std::string txt = "here is something";
	// std::cout << "size: " << std::to_string(txt.length()) << "\n";
	// std::cout << "size: " << std::to_string(txt.size());
	// std::string txt = "here is something";
	// char value = txt[3];
	// std::cout << "the character is [" << value << "].\n";
	// txt[0] = 'J';
	// std::cout << txt;
	std::cout << "Enter your full name.\n";
	std::string first_name;
	std::cin >> first_name;
	std::cout << first_name;
	// std::cout << "Enter your last_name.";
	std::string name;
	std::getline(std::cin, name);
	std::cout << name;*/

	// contrainte : 100 ligne, textuel.

	std::string accept;
	std::string choise;

	std::cout << "Hello adventurer, i'm BOT. I'm your guide in this adventure\n";
	std::cout << "please, writh your full name :\n";
	std::string name;
	std::cin >> name;
	std::cout << "Good, good! Now adventurer " << name;
	std::getline(std::cin, name);
	std::cout << name << " you awake in the room larg and cool without light. you see a sheet and a armor but you can take only one. You take the sheet or the armor\n";
	std::cin >> choise;
	if (choise == "sheet") 
	{
	std::cout << "ok, you take the sheet";
	}
	else if (choise == "armor")
	{
		std::cout << "ok, you rake the armor";
	}
	else
	{
		MessageBox(nullptr, "please writh correctly", "ERROR!", MB_ICONEXCLAMATION);
	}

	return 0;
}