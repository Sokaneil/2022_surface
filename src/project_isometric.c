/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-21 - 16:42 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: isometric projection
 */

#include <lapin.h>
#include "surface.h"

t_bunny_position project_isometric(int x, int y, int z, int coef)
{
    t_bunny_position P;
    float i;
    float j;

    i = 0.75;
    j = 0.25;
    P.x = (i*x - i*y)*coef;
    P.y = -z + (j*x + j*y)*coef;
    return (P);
}
