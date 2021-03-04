#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>
# include <exception>
# include <limits>

class span
{
	public:
		span(const unsigned int n);
		span(const span &rhs);
		~span(void);
		span				&operator=(const span &rhs);
		void	addNumber(int nbr);
		void	addnNumber(int nbr, unsigned int n);
	//exception
		class	SpanFull: public std::exception
		{
			virtual const char *what(void) const throw()
			{
				return ("Span full");
			}
		};
		class	NotEnoughtElem: public std::exception
		{
			virtual const char *what(void) const throw()
			{
				return ("Not enought elements to create a span");
			}
		};
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

	private:
		span(void);
		unsigned int		_size;
		std::vector<int>	_vect;
};

#endif