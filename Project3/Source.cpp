#include <iostream>

int main()
{
	int a{ 100 };
	int b{ 200 };

	int *ptr1 = &a;
	int *ptr2 = &b;

	while (1)
	{
		std::cout << "1 oder 2: ";
		int eingabe{0};
		std::cin >> eingabe;

		if (eingabe == 1)
		{
			std::cout << *ptr1;
		}
		else if (eingabe == 2)
		{
			std::cout << *ptr2;
		}
		else
		{
			std::cout << "Falsche Eingabe!";
		}

		std::cout << "Nochmal? (y/n)";
		char ende;
		std::cin >> ende;
		if (ende== 'y')
		{
			//gehe oben hin bei (y)es
		}
		else //ende bei jeder anderen Taste
		{
			return 0;
		}
	}
	return 0;
}