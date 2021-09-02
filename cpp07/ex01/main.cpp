#include <iostream>
#include "iter.hpp"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	std::string		str = "Bonsoir";
	unsigned int	length = 7;

	iter(&str, length, toupper);
}