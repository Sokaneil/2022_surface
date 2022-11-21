/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-21 - 16:44 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: structure for the projection
 */

#ifndef _STRUCT_H_
#define _STRUCT_H_

struct structure {
    int origin_x;
    int origin_y;
    t_bunny_pixelarray *px;
    int projection;
    int width;
    int height;
    int coordsup;
    int coordsdown;
    int coef;
};

#endif
