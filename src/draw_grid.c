#include <lapin.h>
#include "surface.h"

static void stu_draw_isometric_Y(int x, int y,int z, t_bunny_pixelarray *px)
{
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    while(i <= x - 1) {
        while(j < y - 1) {
            P_x = project_isometric(i, j, z);
            P_y = project_isometric(i, (j + 1), z);
            stu_draw_line(px, &P_x, &P_y, WHITE);
            j += 1;
        }
        j = 0;
        i += 1;
    }
    i = 0;
}
static void stu_draw_isometric_X(int x, int y,int z, t_bunny_pixelarray *px)
{
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    while(j <= y - 1) {
        while(i < x - 1) {
            P_x = project_isometric(i, j, z);
            P_y = project_isometric((i + 1), j, z);
            stu_draw_line(px, &P_x, &P_y, WHITE);
            i += 1;
        }
        i = 0;
        j += 1;
    }
}
static void stu_draw_paralell_Y(int x, int y, int z, t_bunny_pixelarray *px)
{
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    while(i <= x - 1) {
        while(j < y - 1) {
            P_x = project_paralell(i, j, z);
            P_y = project_paralell(i, (j + 1), z);
            stu_draw_line(px, &P_x, &P_y, WHITE);
            j += 1;
        }
        j = 0;
        i += 1;
    }
    i = 0;
}

static void stu_draw_paralell_X(int x, int y, int z, t_bunny_pixelarray *px)
{
    int i;
    int j;
    t_bunny_position P_x;
    t_bunny_position P_y;

    i = 0;
    j = 0;
    while(j <= y - 1) {
        while(i < x - 1) {
            P_x = project_paralell(i, j, z);
            P_y = project_paralell((i + 1), j, z);
            stu_draw_line(px, &P_x, &P_y, WHITE);
            i += 1;
        }
        i = 0;
        j += 1;
    }
}
void draw_grid(int x, int y, int z, t_bunny_pixelarray *px)
{
    stu_draw_isometric_X(x, y, z, px);
    stu_draw_isometric_Y(x, y, z, px);
    stu_draw_paralell_X(x, y, z, px);
    stu_draw_paralell_Y(x, y, z, px);
}
