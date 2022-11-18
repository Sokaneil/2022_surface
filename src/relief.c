/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-18 - 10:16 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: drawing the relief
 */

#include <lapin.h>
#include "surface.h"

static void relief_isometric(struct structure *stats, int x, int y, const int *z)
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
            P_x = project_isometric(i, j, 0, stats->coef)+ stats->origin_x;
            P_y = project_isometric(i, j, z[foo], stats->coef)
                + stats->origin_y;
            stu_draw_line(stats->px, &P_x, &P_y, BLUE);
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
static void relief_paralell(struct structure *stats, int x, int y, const int *z)
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
            P_x = project_paralell(i, j, 0, stats->coef) + stats->origin_x;
            P_y = project_paralell(i, j, z[foo], stats->coef) + stats->origin_y;
            stu_draw_line(stats->px, &P_x, &P_y, BLUE);
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
void relief(struct structure *stats, int x, int y, const int *z)
{
    if (stats->projection == 0) {
        relief_isometric(stats, x, y, z);
    } else if (stats->projection == 1) {
        relief_paralell(stats, x, y, z);
    }
}
