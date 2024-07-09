#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
  std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string Type) : type(Type) {
  std::cout << "Animal Type constructor called" << std::endl;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

Animal::Animal(const Animal &f) {
  std::cout << "Animal Copy constructor called" << std::endl;
  *this = f;
}

Animal &Animal::operator=(const Animal &f) {
  std::cout << "Animal Copy assignment operator called" << std::endl;
  this->type = f.type;
  return *this;
}

void Animal::makeSound() const {
  std::cout << "Animal make sound function called" << std::endl;
  std::cout << "We're the fuckin' animals" << std::endl;
}

std::string Animal::getType() const { return type; }
