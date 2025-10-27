#include <stdio.h>
int apply_gravity(float y, float g)
{
    // velocity
    float v = 0;

    // number of seconds counter until the object reaches the ground(0y)
    int s = 0;

    printf("Started 0s, %.2f y\n", y);

    while(y > 0)
    {
        v = v + g;
        y = y - v;
        s++;
        printf("time %d s  |  y %.2f m  |  v %.2f m/s\n", s, y, v);
    }

    return s;
}

// main program
int main()
{
    // change values here to apply different surface gravities and y levels for an object to fall through
    // y level stops at 0 by default, is measured in meters
    // surface gravity is measured in m/s^2
    apply_gravity(/* change the y level in this arg */200, /*change the surface gravity in this arg*/8.1);

    return 0;

}
