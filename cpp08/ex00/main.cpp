#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	std::list<int>		list1;
	std::vector<int>	vector1(4, 100);

	list1.push_back(13);
	list1.push_back(26);
	list1.push_back(1);

	try
	{
		int		ret;

		ret = easyfind(list1, 26);
		std::cout << ret << std::endl;
	
		ret = easyfind(vector1, 100);
		std::cout << ret << std::endl;
		
		ret = easyfind(vector1, 99);
		std::cout << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
