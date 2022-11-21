To configure the projection of the surface, you can go into the file main.c and configure it in the main function.
You must add coordinates in the z function accordingly to the numbers of coordinates(coordsup and coordsdown) if you want to increase the amounts of coordinates going up or down, otherwise Segmentation fault.
Width and Height is for the window.
Origin x and y is for the origin of the surface.
Change the projection using 1 to show Paralell Projection, and 0 to show Isometric Projection.
