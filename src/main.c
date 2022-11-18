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
    t_bunny_window *win;
    t_bunny_position origin;
    struct structure stats;

    stats.width = 960;
    stats.height = 1080;
    stats.origin_x = stats.width / 2;
    stats.origin_y = stats.height / 3;
    stats.coef = stats.height / 12;
    stats.projection = 0;
    win = bunny_start(stats.width, stats.height, false,
                      "fl: Main Window");
    stats.px = bunny_new_pixelarray(stats.width, stats.height);
    origin.x = 0;
    origin.y = 0;
    clear_pixelarray(&stats, BLACK);
    draw_grid(5, 5, 0, &stats);
    relief(&stats, 5, 5, z);
    terrain(&stats, 5, 5, z);
    bunny_blit(&win->buffer, &stats.px->clipable, &origin);
    bunny_display(win);
    //while (true) {
    usleep(1e7);
        //}
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
