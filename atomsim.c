#include <stdio.h>
int apply_gravity(float y, float g)
{
    // velocity
    float v = 0;

    // number of seconds counter until obj reaches the ground(100y)
    int s = 0;

    while(y > 100)
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
    // empty box, no external forces by default
    // object interacts with gravity
    // object is in a box,
    // box parameters: 100m -- 200m x axis, 100m -- 200m y axis, customize to your needs
    // g = 9.81 m/s^2, approximation of Earth's gravity, customize to your needs
    // gravitational constant ^^^
    // applying gravity
    apply_gravity(200, 9.81);

    return 0;
}
