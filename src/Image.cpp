#include "Image.h"

Image::Image() : tab(nullptr), dimx(0), dimy(0) {}

Image::Image(int dimensionX, int dimensionY)
    : tab(new Pixel[dimensionX * dimensionY]),
      dimx(dimensionX),
      dimy(dimensionY) {}

Image::~Image() {}

Pixel Image::getPix(int x, int y) const {
  return tab[x + dimx * y];
}

void Image::setPix(int x, int y, Pixel couleur) {
  tab[x + dimx * y] = couleur;
}

void Image::dessinerRectangle(int Xmin,
                              int Ymin,
                              int Xmax,
                              int Ymax,
                              Pixel couleur) {
  for (int i = Xmin; i < Xmax; i++)
    for (int j = Ymin; j < Ymax; j++)
      setPix(i, j, couleur);
}

void Image::effacer(Pixel couleur) {
  for (int i = 0; i < dimx; i++)
    for (int j = 0; j < dimy; j++)
      setPix(i, j, couleur);
}