/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 14:40 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: Header files
 */
#ifndef SURFACE_H_
#define SURFACE_H_
#include "struct.h"

float get_ratio(int a, int b, int x);
int get_value(int a, int b, float ratio);
void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position *pos_a,
                   t_bunny_position *pos_b,
                   unsigned int color);
void stu_set_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color);
unsigned int mk_colour(unsigned char r,
                       unsigned char g,
                       unsigned char b,
                       unsigned char a);
void clear_pixelarray(struct structure *stats,
                      unsigned int color);
t_bunny_position project_paralell(int x, int y, int z, int coef);
t_bunny_position project_isometric(int x, int y, int z, int coef);
void draw_grid(int x, int y, int z, struct structure *stats);
void terrain(struct structure *stats, int x, int y, const int *z);
void relief(struct structure *stats, int x, int y, const int *z);

#endif /*SURFACE_H_*/
