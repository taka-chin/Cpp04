#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(std::string Type);
  ~WrongCat();
  WrongCat(const WrongCat &f);
  WrongCat &operator=(const WrongCat &f);
  void makeSound() const;
};

#endif
