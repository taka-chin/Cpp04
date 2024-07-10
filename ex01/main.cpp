#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  int N = 10;
  int i = 0;
  const Animal *animals[N];
  Animal j;
  while (i < N) {
    if (i < N / 2) {
      std::cout << i << std::endl;
      animals[i] = new Dog();
      animals[i]->makeSound();
    } else {
      std::cout << i << std::endl;
      animals[i] = new Cat();
      animals[i]->makeSound();
    }
    i++;
  }
  i = 0;
  while (i < N) {
    std::cout << i << std::endl;
    delete animals[i];
    i++;
  }
  return 0;
}
