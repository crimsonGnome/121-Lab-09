// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>

#include "shapes.h"

using std::cin, std::cout;

int main() {
  // Create Variables
  int height;
  int width;

  // User inputs
  cout << "Input a width? ";
  cin >> width;
  cout << "Input a height? ";
  cin >> height;

  // Create shapes
  Rectangle a(width, height);
  Triangle b(width, height);
  Ellipse c(width, height);

  // print shapes
  PrintShapeInfo(a);
  PrintShapeInfo(b);
  PrintShapeInfo(c);

  return 0;
}
