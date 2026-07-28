#include <iostream>
#include "Span.hpp"

void	subjectTest() {
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void SpanTest(int max, int steps) {
	if (steps >= max)
		return;

	std::cout << "test " << max/steps << std::endl;
	Span	sp = Span(max / steps);

	for (int i = 0; i < max; i += steps) {
		sp.addNumber(i);
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main(void) {
	std::cout << "[ex01]" << std::endl;
	subjectTest();
	SpanTest(30,1);
	SpanTest(300000,10);
	return (0);
}
