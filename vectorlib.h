#pragma once
#include <iostream>

class Vector2 
{
    public:
        float x;
        float y;

        Vector2();
        Vector2(float _x, float _y);
        ~Vector2();

        std::string toStdString();

        //2D Vector math operations
        Vector2 operator + (const Vector2 &vec);
        Vector2 operator - (const Vector2 &vec);
        Vector2 operator * (const Vector2 &vec);
        Vector2 operator / (const Vector2 &vec);
        
        //2D Vector math shorthand operations
        Vector2& operator += (const Vector2 &vec);
        Vector2& operator -= (const Vector2 &vec);
        Vector2& operator *= (const Vector2 &vec);
        Vector2& operator /= (const Vector2 &vec);

        //2D Vector math with real numbers
        Vector2 operator * (const float &val);
        Vector2 operator / (const float &val);

        //2D Vector math with real numbers (shorthand operations)
        Vector2& operator *= (const float &val);
        Vector2& operator /= (const float &val);

        //Returns the magnitude of a 2-Dimensional Vector
        float magnitude();
        //Returns a unit vector of a 2-Dimensional Vector
        Vector2 normalize(); //American spelling because it's defacto spelling for code :/
};

//Returns the magnitude of a 2-Dimensional Vector
float getMagnitude(Vector2 vector);
//Returns a unit vector of a 2-Dimensional Vector
Vector2 getUnitVector(Vector2 vector);
