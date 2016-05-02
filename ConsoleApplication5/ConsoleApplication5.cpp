#include"stdafx.h"
#include <iostream>

// getValueFromUser will read a value in from the user, and return it to the caller
int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

int main()
{
	int x = getValueFromUser(); // first call to getValueFromUser
	int y = getValueFromUser(); // second call to getValueFromUser

	std::cout << x << " + " << y << " = " << x + y << std::endl;

	return 0;
}
