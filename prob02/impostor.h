// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

// Define your Impostor class here.

#include <string>

#include "astronaut.h"
#include "cpputils/graphics/image.h"

using graphics::Color, std::string;

class Impostor : public Astronaut {
 public:
  Impostor() = default;
  Impostor(string name, Color color);

  // Function
  void Kill(Crewmate& crewmate);
};
#endif  // IMPOSTOR_H
