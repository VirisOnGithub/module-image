#include "Image.h"

Image::Image() : tab(nullptr), dimx(0), dimy(0){}

Image::Image(int dimensionX, int dimensionY) : tab(new Pixel[dimensionX*dimensionY]), dimx(dimensionX), dimy(dimensionY){}

Image::~Image(){}