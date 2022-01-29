// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "cpputils/graphics/image.h"

#ifndef PROGRESS_BAR_H
#define PROGRESS_BAR_H

const graphics::Color kProgressBackground(224, 224, 224);
const graphics::Color kProgressForeground(30, 136, 229);

class ProgressBar : public graphics::AnimationEventListener {
 public:
  // Constructor
  ProgressBar();

  // Member Functions
  void Initialize(int speed);
  void OnAnimationStep() override;
  void Start();

  // Destructor
  ~ProgressBar();
  // Used by unit tests. Do not modify.
  graphics::Image* GetImageForTesting() { return &image_; }

 private:
  // The image onto which you can draw the ProgressBar.
  graphics::Image image_;
  int speed_;
  int x_;
};

#endif  // PROGRESS_BAR_H
