#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern( void ) { }
Intern::Intern( Intern const & rhs ) { *this = rhs; }
Intern::~Intern( void ) { }
Intern&	Intern::operator=( Intern const & rhs ) { (void)rhs; return (*this); }


void	init_tabs(std::string* const & tab, void (*function[4])(std::string), std::string target)
{
	tab[0] = "shrubbery creation";
	tab[1] = "robotomy request";
	tab[2] = "presidential pardon";
	function[0] = RobotomyRequestForm(target);
}

Form*	Intern::makeForm(std::string type, std::string target)
{
	std::string tab[3];
	void (*function[3])(std::string);
	init_tabs(tab, function, target);

}

