#pragma once
#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct
{
    float x, y, z;
} vector3;

vector3 sum(vector3 *a, vector3 *b);
vector3 sub(vector3 *a, vector3 *b);
float dot(vector3 *a, vector3 *b);
vector3 cross(vector3 *a, vector3 *b);

#endif
