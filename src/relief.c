/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-18 - 10:16 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: drawing the relief
 */

#include <lapin.h>
#include "surface.h"

/*static void relief_isometric(t_bunny_pixelarray *px, int x, int y, const int *z)
{
    int foo;
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    foo = 0;
    while(j <= y - 1) {
        while(i <= x - 1) {
            P_x = project_isometric(i, j, 0);
            P_y = project_isometric(i, j, z[foo]);
            stu_draw_line(px, &P_x, &P_y, BLUE);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
    i = 0;
    j = 0;
    foo = 0;
    }*/

static void relief_paralell(t_bunny_pixelarray *px, int x, int y, const int *z)
{
    int foo;
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    foo = 0;
    while(j <= y - 1) {
        while(i <= x - 1) {
            P_x = project_paralell(i, j, 0);
            P_y = project_paralell(i, j, z[foo]);
            stu_draw_line(px, &P_x, &P_y, BLUE);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
    i = 0;
    j = 0;
    foo = 0;
}
void relief(t_bunny_pixelarray *px, int x, int y, const int *z)
{
    //relief_isometric(px, x, y, z);
    relief_paralell(px, x, y, z);
}
