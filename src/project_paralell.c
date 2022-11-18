/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-15 - 10:14 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: paralell
 */

#include <lapin.h>
#include "surface.h"

t_bunny_position project_paralell(int x, int y, int z, int coef)
{
    t_bunny_position P;
    float i;

    i = 0.5;
    P.x = (x - i*y) * coef;
    P.y = -z + (i*y) * coef;
    return (P);
}
