#include "Image.h"
#include <cassert>

Image::Image() : tab(nullptr), dimx(0), dimy(0) {}

Image::Image(int dimensionX, int dimensionY)
    : tab(new Pixel[dimensionX * dimensionY]),
      dimx(dimensionX),
      dimy(dimensionY) {}

Image::~Image() {}

Pixel Image::getPix(int x, int y) const {
    if(x < 0 || x >= dimx || y < 0 || y >= dimy){
        return Pixel(0,0,0);
    }

    return tab[x+ dimx*y];
}

Pixel Image::getPix(int x, int y) {
    if(x < 0 || x >= dimx || y < 0 || y >= dimy){
        return Pixel(0,0,0);
    }

    return tab[x+ dimx*y];
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

void testRegression(){
    Image img(10,10);
    Pixel p = img.getPix(0,0);
    assert(p.r == 0);
    assert(p.g == 0);
    assert(p.b == 0);

    img.setPix(0,0,Pixel(255,255,255));
    p = img.getPix(0,0);
    assert(p.r == 255);
    assert(p.g == 255);
    assert(p.b == 255);

    img.setPix(0,0,Pixel(0,0,0));
    p = img.getPix(0,0);
    assert(p.r == 0);
    assert(p.g == 0);
    assert(p.b == 0);

    img.setPix(9,9,Pixel(255,255,255));
    p = img.getPix(9,9);
    assert(p.r == 255);
    assert(p.g == 255);
    assert(p.b == 255);

    img.setPix(9,9,Pixel(0,0,0));
    p = img.getPix(9,9);
    assert(p.r == 0);
    assert(p.g == 0);
    assert(p.b == 0);

    img.setPix(0,9,Pixel(255,255,255));
    p = img.getPix(0,9);
    assert(p.r == 255);
    assert(p.g == 255);
    assert(p.b == 255);

    img.setPix(0,9,Pixel(0,0,0));
    p = img.getPix(0,9);
    assert(p.r == 0);
    assert(p.g == 0);
    assert(p.b == 0);

    img.setPix(9,0,Pixel(255,255,255));
    p = img.getPix(9,0);
    assert(p.r == 255);
    assert(p.g == 255);
    assert(p.b == 255);

    img.setPix(9,0,Pixel(0,0,0));
    p = img.getPix(9,0);
    assert(p.r == 0);
    assert(p.g == 0);
    assert(p.b == 0);
}