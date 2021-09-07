#include "Span.hpp"
#include <list>

int	main(void)
{
	std::list<int> list1(0);

	// std::cout << list1.sort() << std::endl;
	std::cout << list1.size() << std::endl;
	std::list<int>::iterator it = list1.begin();
	std::cout << *it << std::endl;
	it++;
	std::cout << *it << std::endl;
}
