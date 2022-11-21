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
    t_bunny_position P_A;
    t_bunny_position P_B;

    i = 0;
    j = 0;
    foo = 0;
    while(j <= y - 1) {
        while(i <= x - 1) {
            P_A = project_isometric(i, j, 0, stats->coef);
            P_A.x += stats->origin_x;
            P_A.y += stats->origin_y;
            P_B = project_isometric(i, j, z[foo], stats->coef);
            P_B.x += stats->origin_x;
            P_B.y += stats->origin_y;
            stu_draw_line(stats->px, &P_A, &P_B, BLUE);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
}
static void relief_paralell(struct structure *stats, int x, int y, const int *z)
{
    int foo;
    int i;
    int j;
    t_bunny_position P_A;
    t_bunny_position P_B;

    i = 0;
    j = 0;
    foo = 0;
    while(j <= y - 1) {
        while(i <= x - 1) {
            P_A = project_paralell(i, j, 0, stats->coef);
            P_A.x += stats->origin_x;
            P_A.y += stats->origin_y;
            P_B = project_paralell(i, j, z[foo], stats->coef);
            P_B.x += stats->origin_x;
            P_B.y += stats->origin_y;
            stu_draw_line(stats->px, &P_A, &P_B, BLUE);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
}
void relief(struct structure *stats, int x, int y, const int *z)
{
    if (stats->projection == 0) {
        relief_isometric(stats, x, y, z);
    } else if (stats->projection == 1) {
        relief_paralell(stats, x, y, z);
    }
}
