#ifndef PIXEL H
#define _PIXEL_H

struct Pixel {
  unsigned char r, g, b;
  Pixel() : r(0), g(0), b(0){};
  Pixel(int nr, int ng, int nb) : r(nr), g(ng), b(nb){};
};

#endif