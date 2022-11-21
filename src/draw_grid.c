/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-21 - 16:42 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: drawing the grid
 */

#include <lapin.h>
#include "surface.h"

static void stu_draw_isometric_Y(int x, int y,int z, struct structure *stats)
{
    int i;
    int j;
    t_bunny_position P_A;
    t_bunny_position P_B;

    i = 0;
    j = 0;
    while(i <= x - 1) {
        while(j < y - 1) {
            P_A = project_isometric(i, j, z, stats->coef);
            P_A.x += stats->origin_x;
            P_A.y += stats->origin_y;
            P_B = project_isometric(i, (j + 1), z, stats->coef);
            P_B.x += stats->origin_x;
            P_B.y += stats->origin_y;
            stu_draw_line(stats->px, &P_A, &P_B, WHITE);
            j += 1;
        }
        j = 0;
        i += 1;
    }
}
static void stu_draw_isometric_X(int x, int y,int z, struct structure *stats)
{
    int i;
    int j;
    t_bunny_position P_A;
    t_bunny_position P_B;

    i = 0;
    j = 0;
    while(j <= y - 1) {
        while(i < x - 1) {
            P_A = project_isometric(i, j, z, stats->coef);
            P_A.x += stats->origin_x;
            P_A.y += stats->origin_y;
            P_B = project_isometric((i + 1), j, z, stats->coef);
            P_B.x += stats->origin_x;
            P_B.y += stats->origin_y;
            stu_draw_line(stats->px, &P_A, &P_B, WHITE);
            i += 1;
        }
        i = 0;
        j += 1;
    }
}
static void stu_draw_paralell_Y(int x, int y, int z, struct structure *stats)
{
    int i;
    int j;
    t_bunny_position P_A;
    t_bunny_position P_B;

    i = 0;
    j = 0;
    while(i <= x - 1) {
        while(j < y - 1) {
            P_A = project_paralell(i, j, z, stats->coef);
            P_A.x += stats->origin_x;
            P_A.y += stats->origin_y;
            P_B = project_paralell(i, (j + 1), z, stats->coef);
            P_B.x += stats->origin_x;
            P_B.y += stats->origin_y;
            stu_draw_line(stats->px, &P_A, &P_B, WHITE);
            j += 1;
        }
        j = 0;
        i += 1;
    }
}

static void stu_draw_paralell_X(int x, int y, int z, struct structure *stats)
{
    int i;
    int j;
    t_bunny_position P_A;
    t_bunny_position P_B;

    i = 0;
    j = 0;
    while(j <= y - 1) {
        while(i < x - 1) {
            P_A = project_paralell(i, j, z, stats->coef);
            P_A.x += stats->origin_x;
            P_A.y += stats->origin_y;
            P_B = project_paralell((i + 1), j, z, stats->coef);
            P_B.x += stats->origin_x;
            P_B.y += stats->origin_y;
            stu_draw_line(stats->px, &P_A, &P_B, WHITE);
            i += 1;
        }
        i = 0;
        j += 1;
    }
}
void draw_grid(int x, int y, int z, struct structure *stats)
{
    if (stats->projection == 0) {
    stu_draw_isometric_X(x, y, z, stats);
    stu_draw_isometric_Y(x, y, z, stats);
    } else if (stats->projection == 1) {
    stu_draw_paralell_X(x, y, z, stats);
    stu_draw_paralell_Y(x, y, z, stats);
    }
}
