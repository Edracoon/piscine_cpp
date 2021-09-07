#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <limits>

class Span
{
	private:
			std::list<int>		container;
			unsigned int		_N;
			unsigned int		_index;
	public:
			Span( unsigned int N );
			~Span( void );


			class CFE : public std::exception
			{
				public:
						virtual const char* what() const throw ()
						{ return ("Exception: Container Full"); }
			};

			class NNSE : public std::exception
			{
				public:
						virtual const char* what() const throw ()
						{ return ("Exception: Shortest Span: No Number Stored"); }
			};

			class SIE : public std::exception
			{
				public:
						virtual const char* what() const throw ()
						{ return ("Exception: Shortest Span: Size Invalid"); }
			};

			void	addNumber( int numb );
			int		shortestSpan( void );
			int		longestSpan( void );
};

#endif