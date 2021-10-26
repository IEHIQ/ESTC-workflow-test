#include <stdio.h>
#include "vector3.h"

vector3 read_vector3()
{
    float x, y, z;
    printf("Input coords for vector (three float numbers): \n");
    scanf("%f %f %f", &x, &y, &z);

    vector3 res = { x, y, z };
    printf("Your vector: (%f, %f, %f);\n", res.x, res.y, res.z);

    return res;
}

int main() 
{
    vector3 a = read_vector3();
    vector3 b = read_vector3();

    vector3 c = sum(&a, &b);
    printf("Sum: (%f, %f, %f);\n", c.x, c.y, c.z);

    c = sub(&a, &b);
    printf("Sub: (%f, %f, %f);\n", c.x, c.y, c.z);

    float scalar = dot(&a, &b);
    printf("Dot: %f;\n", scalar);

    c = cross(&a, &b);
    printf("Cross: (%f, %f, %f).\n", c.x, c.y, c.z);
}
