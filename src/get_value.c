/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 14:38 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: get the value
 */

int get_value(int a, int b, float ratio)
{
    int value;

    value = ratio*((float) b - a) +(float) a;
    return (value);
}


