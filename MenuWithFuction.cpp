#include <iostream>
#include <cstdlib>

void ShowMenu(); // Since this function only displays the menu it doesn't have return or parameters.
int ReturnChoice(); // This funtion creates and returns the variable choice but it doesn't need parameters. 
void ProcessChoice(int Choice);
/*
* The funtion above processes the option chosen by the user.
* It doesn't returns anything but it needs the integer parameter choice.
*/

int main()
{
	ShowMenu(); 
	// This function creates a menu inside a loop which will only quit if the user types 3. 
}

void ShowMenu()
{
	int Choice = 0;

	do
	{
		std::cout << "**** Tickets for cinema ****\n";
		std::cout << "1 - Buy half price ticket\n";
		std::cout << "2 - Buy full price ticket\n";
		std::cout << "3 - Quit program\n";
		ProcessChoice(ReturnChoice()); 
		/*
		* The function above processes the choice inside the menu and displays the results
		* (which ticket was chosen or quits the application).
		*/
	} while (Choice != 3);
}

int ReturnChoice()
{
	int Choice = 0;
	std::cout << "Choose your option: ";
	std::cin >> Choice;
	return Choice;
}

void ProcessChoice(int Choice)
{
	switch (Choice)
	{
		case 1: std::cout << "\nYou bought a half price ticket.\n\n"; break;
		case 2: std::cout << "\nYou bought a full price ticket.\n\n"; break;
		case 3: std::cout << "\nQuitting program.\n\n"; exit(0); 
		/*
		* If you use break in the line above, the code will keep on looping.
		* You need to use the function exit()  with parameter 0 to quit.
		*/ 
		default: std::cout << "\nInvalid option!\n\n";
	}
}
