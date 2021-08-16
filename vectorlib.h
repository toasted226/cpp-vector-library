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

        Vector2 operator + (const Vector2& vec);
        Vector2 operator - (const Vector2& vec);
        Vector2 operator * (const Vector2& vec);
        Vector2 operator / (const Vector2& vec);
        
        Vector2& operator += (const Vector2& vec);
        Vector2& operator -= (const Vector2& vec);
        Vector2& operator *= (const Vector2& vec);
        Vector2& operator /= (const Vector2& vec);
};
