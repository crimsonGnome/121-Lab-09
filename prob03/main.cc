// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "progress_bar.h"

int main() {
  // Intialize variables
  const int speed = 5;

  // Create Progress Bar
  ProgressBar bar;
  bar.Initialize(speed);
  bar.Start();

  return 0;
}
