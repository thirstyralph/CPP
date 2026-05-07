#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

Animal	**herd(void) {
	int		i = 0;	
	Animal	**ret = new Animal*[100];
	
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

void	destroyHerd(int	n, Animal **flock) {
	for (int i = 0; i < n; ++i) {
		delete flock[i];
	}
	delete[] flock;
}

int	main(void) {
	std::cout << "STARTING ex01" << std::endl;
	std::cout << "SUBJECT TESTS" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "END OF SUBJECT TESTS" << std::endl;

	 Animal		animal;
	Dog			toby;
	Dog			bobby(toby);
	Cat			putogordo;
	Animal		*animalptr;
	WrongCat	notACat;
	WrongAnimal	*notAnAnimal = &notACat;


	animalptr = new Cat(putogordo);
	std::cout << animalptr->getType() << std::endl;
	animalptr->makeSound();
	delete animalptr;
	animalptr = new Dog(toby);
	std::cout << animalptr->getType() << std::endl;
	animalptr->makeSound();

	std::cout << "Wrong cat will speak now:" << std::endl;
	notACat.makeSound();
	std::cout << "Wrong animal will speak now:" << std::endl;
	notAnAnimal->makeSound();

	std::cout << animal.getType() << std::endl;
	std::cout << toby.getType() << std::endl;
	std::cout << putogordo.getType() << std::endl;
	animalptr->makeSound();
	animal.makeSound();
	toby.makeSound();
	putogordo.makeSound();

	std::cout << "Testing the Animal Array" << std::endl;
	Animal **flock = herd();
	for (int h = 0; h < 100; ++h) {
		flock[h]->makeSound();
	}
	destroyHerd(100, flock);
	std::cout << "END OF ex01" << std::endl;
	std::cout << "TESTING DEEP COPYS" << std::endl;
	Dog	*paco = new Dog;
	Dog *pepe = new Dog(*paco);
	delete	paco;
	pepe->makeSound();
	delete pepe;
	delete animalptr;
	std::cout << "END OF TESTING DEEP COPYS" << std::endl;
	return (0);
}
