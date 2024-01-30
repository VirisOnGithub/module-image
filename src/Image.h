#pragma once
#include "Pixel.h"

class Image {
 private:
  Pixel* tab;
  int dimx, dimy;

 public:
  Image();
  Image(int dimensionX, int dimensionY);
  ~Image(){};

  Pixel getPix(int x, int y) const;

  void setPix(int x, int y, Pixel couleur);

  void dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax, Pixel couleur);

  void effacer(Pixel couleur);
};