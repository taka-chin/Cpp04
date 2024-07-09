#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
  std::string type;

public:
  Animal();
  Animal(std::string Type);
  ~Animal();
  Animal(const Animal &f);
  Animal &operator=(const Animal &f);
  void make_sound();
};

#endif
