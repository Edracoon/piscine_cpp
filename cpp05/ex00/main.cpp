#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	test1("Kevin", 1);
		// test1.decreaseGrade();
		test1.increaseGrade();
	}
	catch (const Bureaucrat::GradeTooLowException e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException e)
	{
		std::cerr << e.what() << std::endl;
	}
}
