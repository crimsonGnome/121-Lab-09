// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef SHAPES_H
#define SHAPES_H

// Define your Shape and subclasses here.
#include <string>

using std::string;

// ------------------- Start of shape class --------------------------
class Shape {
 private:
  int width_;
  int height_;

 public:
  // constructor
  Shape(int width, int height);

  // Getters
  int GetWidth() { return width_; };
  int GetHeight() { return height_; };

  // Memeber functions
  virtual int GetArea() = 0;
  virtual string GetType() = 0;
};

// ------------------- End of shape class ----------------------------
// ------------------- Start of Rectangle class ----------------------
class Rectangle : public Shape {
 public:
  // constructor
  Rectangle(int width, int height);

  // memeber Functions
  int GetArea() override;
  string GetType() override { return "rectangle"; };
};

// ------------------- End of Rectangle class ------------------------
// ------------------- Start of Triangle class -----------------------
class Triangle : public Shape {
 public:
  // constructor
  Triangle(int width, int height);

  // memeber Functions
  int GetArea() override;
  string GetType() override { return "triangle"; };
};

// ------------------- End of Triangle class -------------------------
// ------------------- Start of Ellipse class ------------------------
class Ellipse : public Shape {
 public:
  // constructor
  Ellipse(int width, int height);

  // memeber Functions
  int GetArea() override;
  string GetType() override { return "ellipse"; };
};

// ------------------- Start of functions ----------------------------
void PrintShapeInfo(Shape& shape);

#endif  // SHAPES_H
