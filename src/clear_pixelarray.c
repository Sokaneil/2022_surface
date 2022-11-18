/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 15:47 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: background
 */

#include <lapin.h> // For all bunny_ things
#include "surface.h"

void clear_pixelarray(struct structure *stats,
                      unsigned int color)
{
    int width;
    int height;
    int total;
    unsigned int *tmp;
    int i;

    width= stats->px->clipable.clip_height;
    height= stats->px->clipable.clip_width;
    total = width *height;
    tmp =  (unsigned int *)stats->px -> pixels;
    i = 0;
    while (i <= total) {
        tmp [i] = color;
        i = i + 1;
    }
}
