#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
public:
  Cat();
  Cat(std::string Type);
  ~Cat();
  Cat(const Cat &f);
  Cat &operator=(const Cat &f);
  void makeSound() const;
};

#endif
