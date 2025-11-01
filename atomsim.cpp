#include <iostream>
#include <print>
class Object
{
public:
    float Mass; // measured in kg
    float g;
    float y; // y level (height)


    // surface gravity stuff method
    void apply_gravity(float y, float g)
    {
        // velocity
        float v = 0;

        // number of seconds counter until the object reaches the ground(0y)
        float s = 0;

        printf("Started 0s, %.2f y\n", y);

        while(y > 0)
        {
            v = v + (g / 100); // higher precision
            y = y - (v / 100); // higher precision
            s = s + 0.01;
            printf("time %.2f s  |  y %.2f m  |  v %.2f m/s\n", s, y, v);
        }
    }


    // yeah
    float apply_gpe(float Mass, float g, float y) // gravitational potential energy, measured in joules
    {
        return Mass * g * y;
    }
};


// mess around and customize stuff here:
int main()
{
    Object obj1;
    obj1.Mass = 20;
    obj1.g = 9.81;
    obj1.y = 100;

    obj1.apply_gravity(obj1.y, obj1.g);
    printf("%.2f\n", obj1.apply_gpe(obj1.Mass, obj1.g, obj1.y));

    return 0;
}

