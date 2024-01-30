#include "Image.h"

Image::Image() : tab(nullptr), dimx(0), dimy(0){}

Image::Image(int dimensionX, int dimensionY) : tab(new Pixel[dimensionX*dimensionY]), dimx(dimensionX), dimy(dimensionY){}

Image::~Image(){}

Pixel Image::getPix(int x, int y) const {
    return tab[x+ dimx*y];
}

void Image::setPix(int x, int y, Pixel couleur){
    tab[x+ dimx*y] = couleur;
}