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

const int z[] = {200, 30, 60, 90, 160, 200, 100,
                 50, -10, 20, 80, 70, 140, 50,
                 100, 20, -20, 20, 50, 120, 40,
                 170, 70, 20, -10, 35, 40, 80,
                 80, 60, 35, 20, 0, 50, 0,
                 100, 25, 40, 60, 70, 0, 100,
                 10, 50, 70, 85, 100, 0, 10};
static void configuration(struct structure *stats)
{
    stats->coordsup = 7;
    stats->coordsdown = 4;
    stats->width = 1920;
    stats->height = 1080;
    stats->origin_x = 700;
    stats->origin_y = 500;
    stats->coef = 150;
    stats->projection = 0; //1 for Paralell, 0 for Isometric
}
int main(void)
{
    t_bunny_window *win;
    t_bunny_position origin;
    struct structure stats;

    configuration(&stats);
    win = bunny_start(stats.width, stats.height, false,
                      "fl: Main Window");
    stats.px = bunny_new_pixelarray(stats.width, stats.height);
    origin.x = 0;
    origin.y = 0;
    clear_pixelarray(&stats, BLACK);
    draw_grid(stats.coordsdown, stats.coordsup, 0, &stats);
    relief(&stats, stats.coordsdown, stats.coordsup, z);
    terrain(&stats, stats.coordsdown, stats.coordsup, z);
    bunny_blit(&win->buffer, &stats.px->clipable, &origin);
    bunny_display(win);
    usleep(1e7);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
