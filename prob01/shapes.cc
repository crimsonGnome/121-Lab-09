// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "shapes.h"

#include <iostream>
#include <string>

using std::cout, std::endl;
// ------------------- Start of shape class --------------------------

Shape::Shape(int width, int height) {
  this->width_ = width;
  this->height_ = height;
}
// ------------------- End of shape class ----------------------------
// ------------------- Start of Rectangle class ----------------------

Rectangle::Rectangle(int width, int height) : Shape(width, height){};

int Rectangle::GetArea() {
  double area = GetWidth() * GetHeight();
  int answer = area;
  return answer;
}
// ------------------- End of Rectangle class ------------------------
// ------------------- Start of Triangle class -----------------------

Triangle::Triangle(int width, int height) : Shape(width, height){};

int Triangle::GetArea() {
  double area = (GetWidth() * GetHeight()) / 2;
  int answer = area;
  return answer;
}
// ------------------- End of Triangle class -------------------------
// ------------------- Start of Ellipse class ------------------------

Ellipse::Ellipse(int width, int height) : Shape(width, height){};

int Ellipse::GetArea() {
  const double pi = 3.14159;
  double area = GetWidth() * GetHeight() * pi / 4;
  int answer = area;
  return answer;
}
// ------------------- End of Ellipse class --------------------------
// ------------------- Start of functions ----------------------------
void PrintShapeInfo(Shape& shape) {
  cout << shape.GetType() << " with area " << shape.GetArea() << endl;
}
