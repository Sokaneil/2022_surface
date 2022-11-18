#include <lapin.h>
#include "surface.h"

t_bunny_position project_isometric(int x, int y, int z)
{
    t_bunny_position P;
    float i;
    float j;
    int coef;

    i = 0.75;
    j = 0.25;
    coef = 75;
    P.x = (i*x - i*y)*coef + 300;
    P.y = -z + (j*x + j*y)*coef + 400;
    return (P);
}
