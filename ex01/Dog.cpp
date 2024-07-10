#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog Default constructor called" << std::endl;
  type = "Dog";
  this->brain = new Brain(); 
}

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; 
		delete this->brain; 
		}

Dog::Dog(const Dog &f) : Animal(f) {
  std::cout << "Dog Copy constructor called" << std::endl;
  *this = f;
}

Dog &Dog::operator=(const Dog &f) {
  std::cout << "Dog Copy assignment operator called" << std::endl;
  this->type = f.type;
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Dog make sound function called" << std::endl;
  std::cout << "one" << std::endl;
}
