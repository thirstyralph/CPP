#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <limits.h>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span (const Span &src);
		~Span();
		Span &operator=(const Span& src);

		void	addNumber(int n);

		int	shortestSpan();
		int	longestSpan();
	private:
		int *_arr;
		int	_size;
		int	_last;
};

#endif
