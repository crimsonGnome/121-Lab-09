// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "impostor.h"

#include <iostream>
#include <string>

#include "astronaut.h"
#include "cpputils/graphics/image.h"
#include "crewmate.h"

using graphics::Color, std::cout, std::endl, std::string;

Impostor::Impostor(string name, Color color) : Astronaut(name, color) {}

void Impostor::Kill(Crewmate& crewmate) {
  crewmate.SetIsAlive(false);
  cout << GetName() << " killed " << crewmate.GetName() << endl;
}
