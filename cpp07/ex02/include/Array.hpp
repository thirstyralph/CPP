#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
	private:
		T				*arr;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array&		operator=(const Array& other);
		T&			operator[](unsigned int index);
		const T&	operator[](unsigned int index) const;
		unsigned int size(void);
		~Array();

};

#include "Array.tpp"
#endif
