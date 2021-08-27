#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	private:
			const std::string	_name;
			bool				_signed;
			const int			_gradeSign;
			const int			_gradeExec;
	public:
			Form( void );
			Form( std::string name, const int gradeSign, const int gradeExec);
			Form( Form const & rhs );
			~Form( void );
			Form&	operator=( Form const & rhs );

			std::string	getName() const;
			bool		getSigned() const;
			int			getGradeSign() const;
			int			getGradeExec() const;

			class GradeTooHighException : public std::exception
			{
				public:
						virtual const char* what() const throw ()
						{
							return ("Grade Too High");
						}
			};
			class GradeTooLowException : public std::exception
			{
				public:
						virtual const char* what() const throw ()
						{
							return ("Grade Too Low");
						}
			};
};

std::ostream&	operator<<(std::ostream& ofs, Form const & rhs);

#endif

