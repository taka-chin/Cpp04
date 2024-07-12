#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog Default constructor called" << std::endl;
  type = "Dog";
  this->brain = new Brain();
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
  delete this->brain;
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << "Dog Copy constructor called" << std::endl;
  *this = other;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog Copy assignment operator called" << std::endl;
  if (this != &other) {
	Animal::operator=(other);
	delete this->brain;
    this->type = other.type;
	this->brain = new Brain(*other.brain);
  }
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Dog make sound function called" << std::endl;
  std::cout << "one" << std::endl;
}
