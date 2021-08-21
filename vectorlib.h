#pragma once
#include <iostream>

class Vector2 
{
    public:
        float x;
        float y;

    public:
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

        //Returns the magnitude of a 2-Dimensional Vector
        static float getMagnitude(Vector2 vector);
        //Returns a unit vector of a 2-Dimensional Vector
        static Vector2 getUnitVector(Vector2 vector);
        //Returns the dot product of two 2-Dimensional Vectors
        static float dotProduct(Vector2 vec1, Vector2 vec2);
        //Returns the angle between a pair of 2-Dimensional Vectors
        static float angleBetween(Vector2 vec1, Vector2 vec2);
        //Returns the 2-Dimensional Vector (1, 1)
        static Vector2 ones();
};

class Vector3 
{
    public:
        float x;
        float y;
        float z;

    public:
        Vector3();
        Vector3(float _x, float _y, float _z);
        ~Vector3();

        std::string toStdString();

        //2D Vector math operations
        Vector3 operator + (const Vector3 &vec);
        Vector3 operator - (const Vector3 &vec);
        Vector3 operator * (const Vector3 &vec);
        Vector3 operator / (const Vector3 &vec);
        
        //2D Vector math shorthand operations
        Vector3& operator += (const Vector3 &vec);
        Vector3& operator -= (const Vector3 &vec);
        Vector3& operator *= (const Vector3 &vec);
        Vector3& operator /= (const Vector3 &vec);

        //2D Vector math with real numbers
        Vector3 operator * (const float &val);
        Vector3 operator / (const float &val);

        //2D Vector math with real numbers (shorthand operations)
        Vector3& operator *= (const float &val);
        Vector3& operator /= (const float &val);

        //Returns the magnitude of a 3-Dimensional Vector
        float magnitude();
        //Returns a unit vector of a 3-Dimensional Vector
        Vector3 normalize(); //American spelling because it's defacto spelling for code :/

        //Returns the magnitude of a 3-Dimensional Vector
        static float getMagnitude(Vector3 vector);
        //Returns a unit vector of a 3-Dimensional Vector
        static Vector3 getUnitVector(Vector3 vector);
        //Returns the dot product of two 3-Dimensional Vectors
        static float dotProduct(Vector3 vec1, Vector3 vec2);
        //Returns the angle between a pair of 3-Dimensional Vectors
        static float angleBetween(Vector3 vec1, Vector3 vec2);
        //Returns the 2-Dimensional Vector (1, 1, 1)
        static Vector3 ones();
        //Returns the cross product of two 3-Dimensional Vectors
        static Vector3 crossProduct(Vector3 vec1, Vector3 vec2);
};
