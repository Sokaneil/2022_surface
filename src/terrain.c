#include "struct.h"
#include <lapin.h>
#include "surface.h"

static void terrain_isometric_Y(t_bunny_pixelarray *px,
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
            P_x = project_isometric(i, j, z[foo]);
            P_y = project_isometric((i + 1), j, z[foo + 1]);
            stu_draw_line(px, &P_x, &P_y, GREEN);
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
static void terrain_isometric_X(t_bunny_pixelarray *px,
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
            P_x = project_isometric(i, j, z[foo]);
            P_y = project_isometric(i,(j + 1), z[foo + x]);
            stu_draw_line(px, &P_x, &P_y, GREEN);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
}
static void terrain_paralell_Y(t_bunny_pixelarray *px,
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
            P_x = project_paralell(i, j, z[foo]);
            P_y = project_paralell((i + 1), j, z[foo + 1]);
            stu_draw_line(px, &P_x, &P_y, GREEN);
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
static void terrain_paralell_X(t_bunny_pixelarray *px,
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
            P_x = project_paralell(i, j, z[foo]);
            P_y = project_paralell(i,(j + 1), z[foo + x]);
            stu_draw_line(px, &P_x, &P_y, GREEN);
            i += 1;
            foo += 1;
        }
        j += 1;
        i = 0;
    }
}
void terrain(t_bunny_pixelarray *px, int x, int y, const int *z)
{
    terrain_isometric_X(px, x, y, z);
    terrain_isometric_Y(px, x, y, z);
    terrain_paralell_X(px, x, y, z);
    terrain_paralell_Y(px, x, y, z);
}
