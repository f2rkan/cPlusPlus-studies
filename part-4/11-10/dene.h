#ifndef dene
#define dene

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

//function prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif // !d_ne.h
