#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << "STARTING ex00" << std::endl;
	std::cout << "SUBJECT TESTS" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "END OF SUBJECT TESTS" << std::endl;

	Animal		animal;
	Dog			toby;
	Cat			putogordo;
	Animal		*animalptr;
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

	std::cout << animal.getType() << std::endl;
	std::cout << toby.getType() << std::endl;
	std::cout << putogordo.getType() << std::endl;
	animalptr->makeSound();
	animal.makeSound();
	toby.makeSound();
	putogordo.makeSound();
	std::cout << "END OF ex00" << std::endl;
	return (0);
}
