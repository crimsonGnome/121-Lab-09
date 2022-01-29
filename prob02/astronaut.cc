// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "astronaut.h"

// Implement the methods in the Astronaut class here.

#include <string>

#include "cpputils/graphics/image.h"

using graphics::Color, std::string;

Astronaut::Astronaut() {
  this->name_ = "sus";
  const int colorDefault = 255;
  Color defaultColor(colorDefault, colorDefault, colorDefault);
  this->color_ = defaultColor;
}

Astronaut::Astronaut(string name, Color color) {
  this->name_ = name;
  this->color_ = color;
}
