// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "progress_bar.h"

#include <iostream>

#include "cpputils/graphics/image.h"

using graphics::Image, std::cout, std::endl;

// ------------------ Start of Memeber Functions ----------------------

ProgressBar::ProgressBar() { this->x_ = 0; }

void ProgressBar::OnAnimationStep() {
  // Intialize variables
  const int width = 500;
  const int progressWidth = 200;
  const int height = 30;
  int x = x_ % width;
  int differnce = width - x;

  // Reset Image
  this->image_.DrawRectangle(0, 0, width, height, kProgressBackground);

  // Determine if the progress bar passes the end.
  if (differnce < progressWidth) {
    int overflow = progressWidth - differnce;
    image_.DrawRectangle(x, 0, differnce, height, kProgressForeground);
    image_.DrawRectangle(0, 0, overflow, height, kProgressForeground);
  } else {
    image_.DrawRectangle(x, 0, progressWidth, height, kProgressForeground);
  }

  // Add speed
  this->x_ = x_ + speed_;
  image_.Flush();
}

void ProgressBar::Initialize(int speed) {
  const int width = 500;
  const int height = 30;
  this->speed_ = speed;
  this->image_.Initialize(width, height);
  this->image_.DrawRectangle(0, 0, width, height, kProgressBackground);
  image_.AddAnimationEventListener(*this);
}

void ProgressBar::Start() { image_.ShowUntilClosed("Best progress bar ever!"); }
// ------------------ End of Memeber Functions ------------------------
// ------------------ Destructor --------------------------------------

ProgressBar::~ProgressBar() { image_.RemoveAnimationEventListener(*this); }
