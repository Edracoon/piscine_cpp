#include "Phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called phonebook" << std::endl;
	this->i = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called phonebook" << std::endl;
}

void	Phonebook::show_info(int n)
{
	std::cout << this->tab[n - 1].getFirstname();
}

void	Phonebook::search(void)
{
	std::string	str;
	int			n;
	for (int i = 0 ; i < this->i ; i++)
	{
		std::cout << i + 1;
		std::cout << "|\t";
		std::cout << this->tab[i].getFirstname();
		std::cout << "|\t";
		std::cout << this->tab[i].getLastname();
		std::cout << "|\t";
		std::cout << this->tab[i].getNickname();
		std::cout << "|\t";
		std::cout << std::endl;
	}
	std::cin >> str;
	n = (int)std::stod (str, &n);
	if (n >= 1 && n <= 8)
		this->show_info(n);
	else
		std::cout << "Please enter a number between 1 and 8 to see the apropriate contact" << std::endl;
}

void	Phonebook::addcontact(void)
{
	std::string buff;

	if (this->i > 7)
		std::cout << "Error: No space left to add a contact" << std::endl;
	else
	{
		std::cout << "first name : ";
		std::cin >> buff;
		this->tab[this->i].setFirstname(buff);
		std::cout << "last name : ";
		std::cin >> buff;
		this->tab[this->i].setLastname(buff);
		std::cout << "nickname : ";
		std::cin >> buff;
		this->tab[this->i].setNickname(buff);
		std::cout << "phone number : ";
		std::cin >> buff;
		this->tab[this->i].setPhonenumber(buff);
		std::cout << "darkest secret : ";
		std::cin >> buff;
		this->tab[this->i].setDarkestsecret(buff);
		this->i++;
	}
}