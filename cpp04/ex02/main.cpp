#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

AAnimal	**herd(void) {
	int		i = 0;	
	AAnimal	**ret = new AAnimal*[100];
	
	while (i < 50) {
		ret[i] = new Dog();
		++i;
	}
	while (i < 100) {
		ret[i] = new Cat();
		++i;
	}
	return (ret);
}

void	destroyHerd(int	n, AAnimal **flock) {
	for (int i = 0; i < n; ++i) {
		delete flock[i];
	}
	delete[] flock;
}

int	main(void) {
	std::cout << "STARTING ex01" << std::endl;
	std::cout << "SUBJECT TESTS" << std::endl;

//	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
//	meta->makeSound();
	//delete meta;
	delete j;
	delete i;
	std::cout << "END OF SUBJECT TESTS" << std::endl;

//	AAnimal		animal;
	Dog			toby;
	Cat			putogordo;
	AAnimal		*animalptr;
	WrongCat	notACat;
	WrongAnimal	*notAnAnimal = &notACat;


	animalptr = &putogordo;
	std::cout << animalptr->getType() << std::endl;
	animalptr->makeSound();
	animalptr = &toby;
	std::cout << animalptr->getType() << std::endl;
	animalptr->makeSound();

	std::cout << "Wrong cat will speak now:" << std::endl;
	notACat.makeSound();
	std::cout << "Wrong animal will speak now:" << std::endl;
	notAnAnimal->makeSound();

//	std::cout << animal.getType() << std::endl;
	std::cout << toby.getType() << std::endl;
	std::cout << putogordo.getType() << std::endl;
	animalptr->makeSound();
//	animal.makeSound();
	toby.makeSound();
	putogordo.makeSound();

	std::cout << "Testing the AAnimal Array" << std::endl;
	AAnimal **flock = herd();
	for (int h = 0; h < 100; ++h) {
		flock[h]->makeSound();
	}
	destroyHerd(100, flock);
	std::cout << "END OF ex01" << std::endl;
	return (0);
}
