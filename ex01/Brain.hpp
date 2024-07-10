#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
private:
  std::string idea[100];

public:
  Brain();
  virtual ~Brain();
  Brain(const Brain &f);
  Brain &operator=(const Brain &f);
};

#endif
