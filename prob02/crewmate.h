// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "astronaut.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

// Define your crewmate class here.

#include <string>

#include "astronaut.h"
#include "cpputils/graphics/image.h"
#include "crewmate.h"

using graphics::Color, std::string;

class Crewmate : public Astronaut {
 private:
  bool isAlive_;
  int taskCount_;

 public:
  Crewmate() = default;
  Crewmate(string name, Color color);

  // Getters
  bool GetIsAlive() const { return isAlive_; };
  int GetTaskCount() const { return taskCount_; };

  // Setters
  void SetIsAlive(bool isAlive) { this->isAlive_ = isAlive; };

  // Functions
  void DoTask(string task);
  Color GetColor();
  string GetIconFilename();
};

#endif  // CREWMATE_H
