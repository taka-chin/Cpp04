#include "Brain.hpp"
#include <iostream>

Brain::Brain() { std::cout << "Brain Default constructor called" << std::endl; }

/* Brain::Brain(std::string Type) : type(Type) { */
/*   std::cout << "Brain Type constructor called" << std::endl; */
/* } */

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain::Brain(const Brain &f) {
  std::cout << "Brain Copy constructor called" << std::endl;
  *this = f;
}

Brain &Brain::operator=(const Brain &f) {
  std::cout << "Brain Copy assignment operator called" << std::endl;
  int i = 0;
  while (i < 100) {
    this->idea[i] = f.idea[i];
    i++;
  }
  return *this;
}
