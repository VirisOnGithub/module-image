#pragma once
#include "Pixel.h"

class Image {
 private:
  Pixel* tab;
  int dimx, dimy;

 public:
  Image() : tab(nullptr), dimx(0), dimy(0){};
  ~Image();
};