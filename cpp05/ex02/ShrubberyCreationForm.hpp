#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
			std::string	target;
	public:
			ShrubberyCreationForm( void );
			ShrubberyCreationForm( std::string target );
			ShrubberyCreationForm( ShrubberyCreationForm const & rhs );
			virtual ~ShrubberyCreationForm();

			ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);
			virtual void	Action( void ) const;

};

#endif