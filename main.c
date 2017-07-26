#include <stdio.h>
#include <math.h>
#include "mandelbrot.h"
#include <stdint.h>
#include "image.h"

#define init_centerx 0.0
#define init_centery 0.0
#define init_lengthx 1.0
#define init_lengthy 1.0
#define init_pixelcountx 50


int main(int argc, char** argv) {
  double pixel_size = init_lengthx / (double)init_pixelcountx;
  int init_pixelcounty = (int)(init_lengthy / pixel_size);
  double hsv[init_pixelcounty * init_pixelcountx * 3];
 
  mandelbrot(init_centerx, init_centery, init_lengthx, init_lengthy, init_pixelcountx, hsv);

  dump_hsv("thefractalyo", init_pixelcountx, init_pixelcounty, hsv);
}
