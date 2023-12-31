/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 15:46 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: make colour
 */

union colour {
    unsigned int full;
    unsigned char rgba[4];
};

unsigned int mk_colour(unsigned char r,
                       unsigned char g,
                       unsigned char b,
                       unsigned char a)
{
    union colour col;
    col.full = 0;

    col.rgba[0] = r;
    col.rgba[1] = g;
    col.rgba[2] = b;
    col.rgba[3] = a;
    return (col.full);
}
