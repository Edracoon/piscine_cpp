#include <iostream>
#include "Array.hpp"

int	main(void)
{
	try
	{
		Array<unsigned int> test = Array<unsigned int>(5);

		Array<unsigned int> bonsoir = test;

		std::cout << "test[0] :" << test[0] << std::endl;
		test[0] = 2;
		std::cout << "test[0] :" << test[0] << std::endl;
		std::cout << "bonsoir[0] :" << bonsoir[0] << std::endl;

		Array<std::string> strs = Array<std::string>(4);
		std::cout << "str[2] :" << strs[2] << std::endl;
		strs[2] = "bonsoir";
		std::cout << "str[2] :" << strs[2] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
