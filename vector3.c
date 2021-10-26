#include "vector3.h"

vector3 sum(vector3 *a, vector3 *b) 
{
    vector3 result = {
        a->x + b->x,
        a->y + b->y,
        a->z + b->z,
    };

    return result;
}

vector3 sub(vector3 *a, vector3 *b)
{
    vector3 result = {
        a->x - b->x,
        a->y - b->y,
        a->z - b->z,
    };

    return result;
}

float dot(vector3 *a, vector3 *b) 
{
    return a->x * b->x +
           a->y * b->y +
           a->z * b->z;
}

vector3 cross(vector3 *a, vector3 *b)
{
    float xa = a->x, ya = a->y, za = a->z;
    float xb = b->x, yb = b->y, zb = b->z;

    vector3 result = {
        ya * zb - yb * za,
        -(xa * zb - xb * za),
        xa * yb - xb * ya
    };

    return result;
}
