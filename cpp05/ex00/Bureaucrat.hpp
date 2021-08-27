#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	private:
			const std::string	_name;
			int					_note;
	public:
			Bureaucrat( void );
			Bureaucrat( const std::string name, int note );
			Bureaucrat( Bureaucrat const & rhs );
			~Bureaucrat( void );

			const std::string	getName( void ) const;
			int					getNote( void ) const;

			void				increaseGrade();
			void				decreaseGrade();

			// "Nested Class : Exception for grade too High"
			class GradeTooHighException : public std::exception // J'herite de la class std::exception
			{
				public:
					virtual const char* what() const throw()	// Je redefinie la methode what() 
					{											// selon ce que je veux moi renvoyer dans mon exception
						return ("Error: Grade too High");
					}
			};

			// "Nested Class : Exception for grade too Low"
			class GradeTooLowException : public std::exception
			{
				public:
					virtual const char* what() const throw()	
					{											
						return ("Error: Grade too Low");
					}
			};

			// Bureaucrat&	operator=(Bureaucrat const & rhs);
};

#endif