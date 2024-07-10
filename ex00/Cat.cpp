#include "Cat.hpp"

Cat::Cat() : Animal() {
  std::cout << "Cat Default constructor called" << std::endl;
  type = "Cat";
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

void Cat::makeSound() const {
  std::cout << "Cat make sound function called" << std::endl;
  std::cout << "nya-" << std::endl;
}
