/*
 * E89 Pedagogical & Technical Lab
 * project:     Surface
 * created on:  2022-11-10 - 14:37 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: get the ratio
 */

float get_ratio(int a, int b, int x)
{
    float ratio;

    ratio = ((float) x - a) / ((float) b - a);
    return ratio;
}

