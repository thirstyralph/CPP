#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>



template <typename T>
void	printVal(T val) {
	std::cout << val << std::endl;
}

template <typename T>
void	iter (T *arr, unsigned int len, void (*func)(T&)) {
	for (unsigned int i = 0; i < len; ++i) {
		func(arr[i]);
	}
};

template <typename T>
void	iter (const T *arr, unsigned int len, void (*func)(const T&)) {
	for (unsigned int i = 0; i < len; ++i) {
		func(arr[i]);
	}
};

#endif
