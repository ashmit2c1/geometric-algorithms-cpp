#include "vector.h"

float ashmit::crossProduct2D(Vector2f v1, Vector2f v2){
    return v1[X]*v2[Y] - v1[Y]*v2[X];
}

ashmit::Vector3f ashmit::crossProduct3D(Vector3f v1, Vector3f v2){
    float _x,_y,_z;
    _x = v1[Y]*v2[Z] - v1[Z]*v2[Y];
    _y = -(v2[Z]*v1[X] - v1[Z]*v2[X]);
    _z = v1[X]*v2[Y]-v2[X]*v1[Y];

    return Vector3f(_x,_y,_z);
}

float ashmit::scalerTripleProduct(Vector3f v1,Vector3f v2, Vector3f v3){
    auto bc_cross = crossProduct3D(v2,v3);
    return dotProduct(v1,bc_cross);
}