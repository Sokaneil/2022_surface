/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 14:40 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: Header files
 */
#ifndef SURFACE_H_
#define SURFACE_H_

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
void clear_pixelarray(t_bunny_pixelarray *pxa,
                      unsigned int color);
t_bunny_position project_paralell(int x, int y, int z);
void stu_draw_paralell(int x, int y, int z, t_bunny_pixelarray *px);
t_bunny_position project_isometric(int x, int y, int z);
void stu_draw_isometric(int x, int y,int z, t_bunny_pixelarray *px);
void terrain(t_bunny_pixelarray *px, int x, int y, const int *z);
void relief(t_bunny_pixelarray *px, int x, int y, const int *z);

#endif /*SURFACE_H_*/
