#include "Span.hpp"

Span::Span(): _arr(NULL), _size(0), _last(0) {
}

Span::Span(unsigned int N) : _arr(NULL), _size(N), _last(-1) {
	_arr = new int[N];
}

Span::Span(const Span &src) : _size(src._size), _last(-1) {
	_arr = new int[_size];
	for (int i = 0; i < _size; ++i)
		_arr[i] = src._arr[i];
}

Span::~Span() {
	delete[] _arr;
}

Span &Span::operator=(const Span& src) {
	if (this != &src) {
		delete[] _arr;
		_size = src._size;
		_last = src._last;
		for (int i = 0; i <= _last; ++i)
			_arr[i] = src._arr[i];
	}
	return *this;
}

void	Span::addNumber(int n){
	if ((_last + 1) == _size)
		throw std::out_of_range("Span is already full");
	++_last;
	_arr[_last] = n;
}

int Span::shortestSpan() {
	int	span = INT_MAX;

	if (_last <= 0)
		throw std::out_of_range("Not enough contents for a span to be calculated");
	for (int i = 0; i <= _last; ++i) {
		for (int j = 0; j <= _last; ++j) {
			if (!((i == j) || (_arr[i]  == _arr[j]))) {
				if (((_arr[i] - _arr[j]) > 0) && ((_arr[i] - _arr[j]) < span))
					span = (_arr[i] - _arr[j]);
			}
		}
		if (span == 1)
			return (span);
	}
	return (span);
}

int Span::longestSpan() {
	if (_last <= 0)
		throw std::out_of_range("Not enough numbers");
	int	highest = _arr[0];
	int	lowest = _arr[0];
	for (int i = 1; i <= _last; ++i) {
		if (_arr[i] < lowest) lowest = _arr[i];
		if (_arr[i] > lowest) highest = _arr[i];
	}
	long long diff = (long long)highest - (long long)lowest;
	if (diff > INT_MAX) throw std::overflow_error("span overlflow");
	return (int)diff;
}
