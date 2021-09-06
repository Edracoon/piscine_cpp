#include <iostream>
#include "Array.hpp"

int	main(void)
{
	std::string* s = new std::string;

	std::cout << *s << std::endl;
	Array<unsigned int> test = Array<unsigned int>(5);
	try
	{
		std::cout << test[2] << std::endl;
		Array<unsigned int> bonsoir = test;

		Array<std::string> strs = Array<std::string>(4);
		std::cout << strs[2] << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
