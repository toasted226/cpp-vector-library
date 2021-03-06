#include <iostream>
#include "vectorlib.h"

int main() 
{
    std::cout << "-- 2D Vectors --" << std::endl;

    Vector2 v1(2, 3), v2(3, 2);
    Vector2 finalVector = v1 + v2 * (Vector2::ones() + Vector2::ones());
    finalVector += Vector2(2, 3);
    finalVector *= 2;
    float mag = finalVector.magnitude();
    Vector2 unitVector = finalVector.normalize();
    float angle = Vector2::angleBetween(v1, v2);
    
    std::cout << "Final vector value: (" << finalVector.toStdString() << ")" << std::endl;
    std::cout << "Final vector magnitude: " << mag << std::endl;
    std::cout << "Final vector normalised: (" << unitVector.toStdString() << ")" << std::endl;
    std::cout << "Angle between v1 and v2: " << angle << std::endl;

    std::cout << "\n-- 3D Vectors --" << std::endl;

    Vector3 v(1, 2, 3), u(4, 5, 6);
    Vector3 fv = v + u * (Vector3::ones() + Vector3::ones());
    fv += Vector3(4, 2, 4);
    fv *= 2;
    float mag3 = fv.magnitude();
    Vector3 unitV3 = fv.normalize();
    float angle3 = Vector3::angleBetween(v, u);
    Vector3 c = Vector3::crossProduct(v, u);

    std::cout << "Final vector value: (" << fv.toStdString() << ")" << std::endl;
    std::cout << "Final vector magnitude: " << mag3 << std::endl;
    std::cout << "Final vector normalised: (" << unitV3.toStdString() << ")" << std::endl;
    std::cout << "Angle between v1 and v2: " << angle3 << std::endl;
    std::cout << "Cross product of V and U: (" << c.toStdString() << ")" << std::endl;

    return 0;
}
