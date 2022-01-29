// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

// Define your Astronaut class here.
#include <string>

#include "cpputils/graphics/image.h"

using graphics::Color, std::string;

class Astronaut {
 protected:
  string name_;
  Color color_;

 public:
  // Constructor
  Astronaut();
  Astronaut(string name, Color color);

  // Getters
  string GetName() const { return name_; };
  virtual Color GetColor() const { return color_; };
  virtual string GetIconFilename() const { return "astronaut.bmp"; };
};

#endif  // ASTRONAUT_H
