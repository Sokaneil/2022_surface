/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 15:47 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: background
 */

#include <lapin.h> // For all bunny_ things
#include <unistd.h> // For usleep
#include <stdlib.h> // For EXIT_SUCCESS

void clear_pixelarray(t_bunny_pixelarray *pxa,
                      unsigned int color)
{
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int total = width * height;
    unsigned int *tmp = (unsigned int *)pxa -> pixels;
    int i;

    i = 0;
    while (i <= total) {
        tmp [i] = color;
        i = i + 1;
    }
}
