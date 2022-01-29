// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "crewmate.h"

#include <iostream>
#include <string>

#include "astronaut.h"
#include "cpputils/graphics/image.h"

using graphics::Color, std::cout, std::endl, std::string;

Crewmate::Crewmate(string name, Color color) : Astronaut(name, color) {
  this->isAlive_ = true;
  this->taskCount_ = 0;
}

void Crewmate::DoTask(string task) {
  this->taskCount_++;
  cout << GetName() << " is doing " << task << endl;
}

Color Crewmate::GetColor() {
  const int colorAvg = 256;
  if (isAlive_) {
    return color_;
  } else {
    Color deadColor((color_.Red() + colorAvg) / 2,
                    (color_.Green() + colorAvg) / 2,
                    (color_.Blue() + colorAvg) / 2);
    return deadColor;
  }
}

string Crewmate::GetIconFilename() {
  if (isAlive_) {
    return "astronaut.bmp";
  } else {
    return "ghost.bmp";
  }
}
