#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"

enum types
{
	TYPE_A,
	TYPE_B,
	TYPE_C,
	TYPE_D
};

Base * generate(void) {
	Base *ret = NULL;


	switch(rand() % 4)
	{
		case TYPE_A:
			ret = new A;
			std::cout << "A has been created" << std::endl;
			break;
		case TYPE_B:
			ret = new B;
			std::cout << "B has been created" << std::endl;
			break;
		case TYPE_C:
			ret = new C;
			std::cout << "C has been created" << std::endl;
			break;
		case TYPE_D:
			ret = new D;
			std::cout << "D has been created" << std::endl;
			break;
	}
	return (ret);
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "yeah it's an A" << std::endl;
		return;
	}
	catch (const std::bad_cast&)
	{
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "yeah it's a B" << std::endl;
		return;
	}
	catch (const std::bad_cast&)
	{
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "yeah it's an C" << std::endl;
		return;
	}
	catch (const std::bad_cast&)
	{
	}
	std::cout << "unrecognized Structure type" << std::endl;
}

void identify(Base* p) {
	A	aReference;
	B	bReference;
	C	cReference;

	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "yeah it's an A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "yeah it's a B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "yeah it's a C" << std::endl;
	else
		std::cout << "unrecognized Structure type" << std::endl;
	return ;
}

int	main(void) {
	Base *inst;


	srand(time(NULL));
	for (int i = 0; i < 90; ++i) {
		inst = generate();
		Base& instRef = *inst;
		identify(inst);
		identify(instRef);
		delete inst;
	}
	return (0);
}
