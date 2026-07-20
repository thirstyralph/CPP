#include "iter.hpp"
#include <iostream>

int	main(void) {
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string stringArr[10] = { "1somebody", "2once", "3told", "4me", "5the", "6world", "7was", "8gonna", "9roll", "10me"};

	int	(&arrRef)[9] = arr;
	const int	(&arrConstRef)[9] = arr;

	iter(arr, 9, printVal);
	iter(arrRef, 9, printVal);
	iter(arrConstRef, 9, printVal);
	iter(stringArr, 10, printVal);
	return (0);
}
