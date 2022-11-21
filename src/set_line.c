/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 14:35 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: tracer une ligne
 */
#include <lapin.h>
#include "surface.h"

void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position *pos_a,
                   t_bunny_position *pos_b,
                   unsigned int color)
{
    int x;
    int y;
    int i;
    int j;
    t_bunny_position pos;

    x = pos_a->x;
    y = pos_a->y;
    i = pos_b->x;
    j = pos_b->y;
    if (pos_a->x > pos_b->x) {
        x = pos_b->x;
        i = pos_a->x;
    }
    if (pos_a->y > pos_b->y) {
        y = pos_b->y;
        j = pos_a->y;
    }
    if ((i - x) >= (j - y)) {
        while(x < i) {
            pos.x = x;
            pos.y = get_value(pos_a->y, pos_b->y,
                              get_ratio(pos_a->x, pos_b->x, x));
            stu_set_pixel(px, &pos, color);
            x = x + 1;
        }
    } else if ((i - x) < (j - y)) {
        while(y < j) {
            pos.y = y;
            pos.x = get_value(pos_a->x, pos_b->x,
                              get_ratio(pos_a->y, pos_b->y, y));
            stu_set_pixel(px, &pos, color);
            y = y + 1;
        }
    }
}
