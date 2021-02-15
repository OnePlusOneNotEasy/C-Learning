#include<iostream>

enum Points {point2d = 2, point2w, point3d = 4, point3w};

int main()
{
    Points pt3d = point3d;
    Points pt2w = pt3d;
    std::cout << point2d << point2w << pt3d << pt2w << point3w << std::endl;
    return 0;
}