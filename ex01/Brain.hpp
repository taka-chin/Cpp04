#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
protected:
  std::string idea[100];

public:
  Brain();
  Brain(std::string Type);
  virtual ~Brain();
  Brain(const Brain &f);
  Brain &operator=(const Brain &f);
};

#endif
