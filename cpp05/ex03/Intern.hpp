#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:

	public:
			Intern( void );
			Intern( Intern const & rhs );
			~Intern( void );

			Form*	makeForm(std::string type, std::string target);

			Intern&	operator=( Intern const & rhs );
};

#endif