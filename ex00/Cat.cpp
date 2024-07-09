#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
  std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string Type) : Animal(Type) {
  std::cout << "Cat Type constructor called" << std::endl;
}

Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

Cat::Cat(const Cat &f) : Animal(f) {
  std::cout << "Cat Copy constructor called" << std::endl;
  *this = f;
}

Cat &Cat::operator=(const Cat &f) {
  std::cout << "Cat Copy assignment operator called" << std::endl;
  this->type = f.type;
  return *this;
}

void Cat::makeSound() {
  std::cout << "Cat make sound function called" << std::endl;
  std::cout << "nya-" << std::endl;
}
