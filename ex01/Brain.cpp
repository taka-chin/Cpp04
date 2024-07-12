#include "Brain.hpp"
#include <iostream>

Brain::Brain() { std::cout << "Brain Default constructor called" << std::endl; }

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain::Brain(const Brain &other) {
  std::cout << "Brain Copy constructor called" << std::endl;
  *this = other;
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << "Brain Copy assignment operator called" << std::endl;
  int i = 0;
  if(this != &other)
  {
  	while (i < 100) {
    	this->idea[i] = other.idea[i];
    	i++;
  	}
  }
  return *this;
}
