#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

enum types
{
	TYPE_A,
	TYPE_B,
	TYPE_C
};

Base * generate(void) {
	Base *ret;

	srand(time(0));
	switch(rand() % 3)
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
	}
	return (ret);
}

void identify(Base& p) {
	A	aReference;
	B	bReference;
	C	cReference;

	if (dynamic_cast<A *>(&p) != NULL)
	{
		std::cout << "yeah it's an A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(&p) != NULL)
	{
		std::cout << "yeah it's a B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(&p) != NULL)
	{
		std::cout << "yeah it's a C" << std::endl;
		return ;
	}
}

void identify(Base* p) {
	A	aReference;
	B	bReference;
	C	cReference;

	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "yeah it's an A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "yeah it's a B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "yeah it's a C" << std::endl;
		return ;
	}
}

int	main(void) {
	Base *inst;


	for (int i = 0; i < 90; ++i) {
		inst = generate();
		Base& instRef = *inst;
		identify(inst);
		identify(instRef);
		delete inst;
	}
	return (0);
}
