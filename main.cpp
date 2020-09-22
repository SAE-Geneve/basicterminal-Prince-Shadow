#include<iostream>
#include <windows.h>
#include<string>

bool sheet = false;
bool armor = false;

void error()
{
	MessageBox(nullptr, "please writh correctly", "ERROR!", MB_ICONEXCLAMATION);
}

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

	std::string choise;
	std::string choise2;
	std::string choise3;
	std::string choiseEnd1;
	std::string choiseEnd2;

	std::cout << "Hello adventurer, i'm BOT. I'm your guide in this story.\nThis story has multiple endings but writes the choices correctly otherwise the game won't like it.\n\n";
	system("pause");
	std::cout << "please, writh your name :\n";
	std::string name;
	std::cin >> name;
	std::cout << "Good, good! Now adventurer " << name;
	std::getline(std::cin, name);
	std::cout << name << " you awake in the room larg and cool without light. you see a sheet and a armor but you can take only one. You take the sheet or the armor\n	sheet or armor\n";
	std::cin >> choise;

	if (choise == "sheet") 
	{
		std::cout << "ok, you take the sheet and the armor drop in the hole.\n";
		sheet = true;
	}
	else if (choise == "armor")
	{
		std::cout << "ok, you take the armor and the sheet drop in the hole.\n";
		armor = true;
	}
	else
	{
		error();
	}

	if (sheet || armor)
	{
		std::cout << "\nNow you see a door open at the back of the room. What are you doing ? you go through the door or through the hole?\n	door or hole\n";
		std::cin >> choise2;
	}

	if (choise2 == "door")
	{
		std::cout << "you go through the door and see a long and lighted corridor.\n";
		system("pause");
	}

	else if (choise2 == "hole")
	{
		std::cout << "You drop in the hole but it's hight and crash in the ground.\nYou die.";
	}

	else
	{
		error();
	}

	if (sheet && choise2 == "door" || armor && choise2 == "door")
	{
		std::cout << "\nYou're walking down the hall when suddenly ...\nA troll is in front of you.\n";
		system("pause");
		std::cout << "\nFortunately the troll is sleeping.You see a dark path to your right, so you have 2 options:";
		std::cout << "\nYou can take the dark path or try to sneak past the troll.\n	path or sneak\n";
		std::cin >> choise3;
	}


	if (choise3 == "path" && armor)
	{
		std::cout << "\nYou choose to go through the dark path.\nYou bump into but you have your armor you don't feel anything.";
		system("pause");
		std::cout << "\nYou see the light and decide to hurry to get there.\n\n";
		std::cout << "Once you arrive you notice that the light is an access to a potential exit.\nThe hole is small but without your armor you can easily go through.";
		system("pause");
		std::cout << "You can also try to find a way to make it bigger.\n	search or drop.\n";
		std::cin >> choiseEnd1;
	}

	else if (choise3 == "path" && sheet)
	{
		std::cout << "\nYou choose to go through the dark path.\nYou bump into and hurt it.\n";
		system("pause");
		std::cout << "\nYou see the light and decide to hurry to get there.\n\n";
		std::cout << "Once you arrive you notice that the light is an access to a potential exit.\nthe hole is small but you are losing blood.";
		std::cout << "\nYou can try to find a way to heal yourself or try to heal yourself outside.\n	search or exit.\n";
		std::cin >> choiseEnd1;
	}

	else if (choise3 == "sneak" && armor)
	{
		std::cout << "You try to pass discreetly but your armor makes too much noise.\n";
		std::cout << "The troll wakes up and you run away in the dark path that was earlier.\n";
		std::cout << "In your escape, you lose your helmet and bump into the dark path.";
		system("pause");
		std::cout << "\nYou see the light and decide to hurry to get there.\n\n";
		std::cout << "Once you arrive you notice that the light is an access to a potential exit.\nthe hole is small and you are losing blood.";
		std::cout << "\nYou try to find a way to heal yourself\n";
		system("pause");
		std::cout << "You find a bootle of healing.\n";
		std::cout << "hum ? The color of the liquid is weird. Wanna you try to drink this ?\n	drink or drop";
		std::cin >> choiseEnd2;
	}
	
	else if (choise3 == "sneak" && sheet)
	{
		std::cout << "You try to pass discreetly. The troll suddenly snores and surprises you.\n";
		std::cout << "You run fast down the corridor.\n";
		system("pause");
		std::cout << "\nAfter regaining your calm, you look behind you if you haven't awakened the troll.\n";
		std::cout << "OK, no noise. It's good.\nAs you turn around, you notice that you are in the treasure room. You also see an opening at the top of the room, it's the outside!";
		std::cout << "You quickly notice that by stacking the crates you can easily reach but you have nothing to carry so much treasure.\n";
		std::cout << "you take with you: the hail, the ornate sword or the crystal sphere?\n	hail, sword or sphere\n";
		std::cin >> choiseEnd2;
	}

	if (choiseEnd1 == "search" && armor)
	{
		std::cout << "You find à pickaxe. You can leave this cave! you hurry to enlarge it to run away.\n";
		std::cout << "This is the end: I am a knight!\n";
	}

	else if (choiseEnd1 == "search" && sheet)
	{
		std::cout << "you find medicinal herb and rub it on your wounds.\nIt's painful but it seems to work. You are ready to go home.\n";
		std::cout << "this is the end: escape to safety!\n";
	}

	else if (choiseEnd1 == "drop" && armor)
	{
		std::cout << "You drop your armor and pass in the hole. You can go at the home now.\n";
		std::cout << "this is the end: I don't regret this, i'm free now!";
	}

	else if (choiseEnd1 == "exit" && sheet)
	{
		std::cout << "You pass in the hole and walk at the home.\n";
		system("pause");
		std::cout << "maybe ...\nthis is the end: THE END?\n";

	}

	else if (choiseEnd2 == "drink" && armor)
	{
		std::cout << "You drink the weird liquid.\nYou're crazy! This is a poison bottle!\n";
		std::cout << "you try to spit out the liquid but it's already too late. You die slowly.\nthis is the end: NEVER drink a weird bottle\n";
	}

	else if (choiseEnd2 == "hail" && sheet || choiseEnd2 == "sword" && sheet || choiseEnd2 == "sphere" && sheet)
	{
		std::cout << "You escape with your treasure.\nthis is the end: i'm rich !\n";
	}

	else if (choiseEnd2 == "drop" && armor)
	{
		std::cout << "You drop the bottle. It is wise. it could be poison.\nthe bottle rolls to a pickaxe. This is your exit ticket.";
		std::cout << "this is the end: I'm hurt but i'm fine.";
	}

	else
	{
		error();
	}

	std::cout << "\n \n End of the story.\nThank you for playing " << name << ".\n";
	return 0;
}
