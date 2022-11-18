#include <lapin.h>
#include "surface.h"

static void terrain_isometric_Y(struct structure *stats,
                                int x, int y, const int *z)
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
        while(i < x - 1) {
            P_x = project_isometric(i, j, z[foo], stats->coef);
            P_y = project_isometric((i + 1), j, z[foo + 1], stats->coef);
            stu_draw_line(stats->px, &P_x, &P_y, GREEN);
            i += 1;
            foo += 1;
        }
        i = 0;
        j += 1;
        foo +=1;
    }
    i = 0;
    j = 0;
    foo = 0;
}
static void terrain_isometric_X(struct structure *stats,
                                int x, int y, const int *z)
{
    int foo;
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    foo = 0;
    while(j < y - 1) {
        while(i <= x - 1) {
            P_x = project_isometric(i, j, z[foo], stats->coef);
            P_y = project_isometric(i,(j + 1), z[foo + x], stats->coef);
            stu_draw_line(stats->px, &P_x, &P_y, GREEN);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
}
static void terrain_paralell_Y(struct structure *stats,
                                int x, int y, const int *z)
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
        while(i < x - 1) {
            P_x = project_paralell(i, j, z[foo], stats->coef);
            P_y = project_paralell((i + 1), j, z[foo + 1], stats->coef);
            stu_draw_line(stats->px, &P_x, &P_y, GREEN);
            i += 1;
            foo += 1;
        }
        i = 0;
        j += 1;
        foo +=1;
    }
    i = 0;
    j = 0;
    foo = 0;
}
static void terrain_paralell_X(struct structure *stats,
                                int x, int y, const int *z)
{
    int foo;
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    foo = 0;
    while(j < y - 1) {
        while(i <= x - 1) {
            P_x = project_paralell(i, j, z[foo], stats->coef);
            P_y = project_paralell(i,(j + 1), z[foo + x], stats->coef);
            stu_draw_line(stats->px, &P_x, &P_y, GREEN);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
}
void terrain(struct structure *stats, int x, int y, const int *z)
{
    if (stats->projection == 0) {
    terrain_isometric_X(stats, x, y, z);
    terrain_isometric_Y(stats, x, y, z);
    } else if (stats->projection == 1) {
    terrain_paralell_X(stats, x, y, z);
    terrain_paralell_Y(stats, x, y, z);
    }
}
