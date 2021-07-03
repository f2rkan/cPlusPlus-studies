//coordin.h //yapı şablonları ve fonksiyon prototiperi
//yapı şablonları

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance; //distance from origin
    double angle; //direction from origin
};

struct rect
{
    double x; //horizontal distance from origin
    double y; //vertical distance from origin
};

//prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif