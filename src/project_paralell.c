/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-15 - 10:14 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: paralell
 */

#include <lapin.h>

t_bunny_position project_paralell(int x, int y, int z)
{
    t_bunny_position P;
    float i;
    int coef;

    i = 0.5;
    coef = 75;
    P.x = (x - i*y)*coef + 300;
    P.y = -z + (i*y)*coef + 400;
    return (P);
}
