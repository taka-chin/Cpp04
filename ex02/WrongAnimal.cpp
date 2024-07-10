#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &f) {
  std::cout << "WrongAnimal Copy constructor called" << std::endl;
  *this = f;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &f) {
  std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
  this->type = f.type;
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal make sound function called" << std::endl;
  std::cout << "We're the fuckin' wrong animals" << std::endl;
}

std::string WrongAnimal::getType() const { return type; }
