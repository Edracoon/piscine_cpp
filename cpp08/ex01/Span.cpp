#include "Span.hpp"

Span::Span( unsigned int N )
{
	_N = N;
	_index = 0;
	container = std::list<int>(N);
}

Span::~Span( void )
{

}

int		Span::shortestSpan()
{
	int	span = INT_MAX;

	container.sort();

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = container.end();

	it = container.begin();
	if (container.size() == 0)
		throw SIE();
	if (!*it)
		throw NNSE();
	for ( ; it != ite ; it++ )
	{
		if ((*it + 1) - *it < span)
			span = (*it + 1) - *it;
	}
	return (span);
}

int		Span::longestSpan()
{
	container.sort();
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = container.end();

	for (it = container.begin() ; it != ite ; it++)
		;
	return (*it);
}

void Span::addNumber( int numb )
{
	if (_index >= _N)
		throw CFE();
	container.push_back(numb);
	_index++;
}
