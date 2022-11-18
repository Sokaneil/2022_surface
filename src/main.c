/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 15:42 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: main window
 */
#include <lapin.h> // For all bunny_ things
#include <unistd.h> // For usleep
#include <stdlib.h> // For EXIT_SUCCESS
#include "surface.h"

const int z[] = {200, 30, 60, 90, 160,
                 50, -10, 20, 80, 70,
                 100, 20, -20, 20, 50,
                 170, 70, 20, -10, 35,
                 80, 60, 35, 20, 0};
int main(void)
{
    int projection = 1;
    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;

    win = bunny_start(960, 1080, false,
                      "fl: Main Window");
    px = bunny_new_pixelarray(960, 1080);
    origin.x = 0;
    origin.y = 0;
    clear_pixelarray(px, BLACK);
    if (projection == 0) {
        stu_draw_isometric(5, 5, 0, px);
    } else if (projection == 1) {
        stu_draw_paralell(5, 5, 0, px);
    }
    relief(px, 5, 5, z);
    terrain(px, 5, 5, z);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    //while (true) {
    usleep(1e7);
        //}
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
