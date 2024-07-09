#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(){
  std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string Type): Animal(Type){
  std::cout << "Dog Type constructor called" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
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
  
void Dog::makeSound()
{
  std::cout << "Dog make sound function called" << std::endl;
  std::cout << "one" << std::endl;
}
