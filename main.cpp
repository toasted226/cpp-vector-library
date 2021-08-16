#include <iostream>
#include "vectorlib.h"

int main() 
{
    Vector2 v1(2, 3), v2(3, 2);
    Vector2 finalVector = v1 + v2 * (Vector2(1, 1) + Vector2(1, 1));
    finalVector += Vector2(2, 3);
    finalVector *= 2;
    float mag = finalVector.magnitude();
    Vector2 unitVector = finalVector.normalize();
    
    std::cout << "Final vector value: (" << finalVector.toStdString() << ")" << std::endl;
    std::cout << "Final vector magnitude: " << mag << std::endl;
    std::cout << "Final vector normalised: (" << unitVector.toStdString() << ")" << std::endl;

    return 0;
}
