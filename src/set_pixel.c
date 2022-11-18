/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 14:32 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: placer un pixel
 */
#include <lapin.h>

void stu_set_pixel(t_bunny_pixelarray *px,
                   t_bunny_position *pos,
                   unsigned int color)
{
    int width;
    int height;
    int total;
    int i;
    unsigned int *tmp;

    width = px->clipable.clip_width;
    height = px->clipable.clip_height;
    total = width * height;
    tmp = (unsigned int *)px -> pixels;
    i = (width * pos->y) + pos->x;
    if (i < total) {
        tmp[i] = color;
    }

}
