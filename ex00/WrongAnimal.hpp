#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(std::string Type);
  ~WrongAnimal();
  WrongAnimal(const WrongAnimal &f);
  WrongAnimal &operator=(const WrongAnimal &f);
  void makeSound() const;
  std::string getType() const;
};

#endif
