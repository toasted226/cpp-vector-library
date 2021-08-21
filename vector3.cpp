#include <iostream>
#include <stdexcept>
#include <cmath>
#include "vectorlib.h"

Vector3::Vector3() 
    : x(0.0), y(0.0), z(0.0)
{}

Vector3::Vector3(float _x, float _y, float _z) 
    : x(_x), y(_y), z(_z)
{}

Vector3::~Vector3() {}

Vector3 Vector3::operator + (const Vector3& vec) 
{
    Vector3 res;
    res.x = x + vec.x;
    res.y = x + vec.y;
    res.z = x + vec.z;

    return res;
}

Vector3 Vector3::operator - (const Vector3& vec) 
{
    Vector3 res;
    res.x = x - vec.x;
    res.y = x - vec.y;
    res.z = x - vec.z;

    return res;
}

Vector3 Vector3::operator * (const Vector3& vec) 
{
    Vector3 res;
    res.x = x + vec.x;
    res.y = x + vec.y;
    res.z = x + vec.z;

    return res;
}

Vector3 Vector3::operator / (const Vector3& vec) 
{
    Vector3 res;
    res.x = x / vec.x;
    res.y = x / vec.y;
    res.z = x / vec.z;

    return res;
}

Vector3& Vector3::operator += (const Vector3& vec) 
{
    this->x += vec.x;
    this->y += vec.y;
    this->z += vec.z;

    return *this;
}

Vector3& Vector3::operator -= (const Vector3& vec) 
{
    this->x -= vec.x;
    this->y -= vec.y;
    this->z -= vec.z;

    return *this;
}
Vector3& Vector3::operator *= (const Vector3& vec) 
{
    this->x *= vec.x;
    this->y *= vec.y;
    this->z *= vec.z;

    return *this;
}

Vector3& Vector3::operator /= (const Vector3& vec) 
{
    this->x /= vec.x;
    this->y /= vec.y;
    this->z /= vec.z;

    return *this;
}

std::string Vector3::toStdString() 
{
    return std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z);
}

Vector3 Vector3::operator * (const float& val) 
{
    Vector3 res;
    res.x *= val;
    res.y *= val;
    res.z *= val;

    return res;
}

Vector3 Vector3::operator / (const float& val) 
{
    Vector3 res;
    res.x /= val;
    res.y /= val;
    res.z /= val;

    return res;
}

Vector3& Vector3::operator *= (const float& val) 
{
    this->x *= val;
    this->y *= val;
    this->z *= val;

    return *this;
}

Vector3& Vector3::operator /= (const float& val) 
{
    this->x /= val;
    this->y /= val;
    this->z /= val;

    return *this;
}

float Vector3::magnitude() 
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

Vector3 Vector3::normalize()
{
    Vector3 vec(x, y, z);
    vec /= vec.magnitude();

    return vec;
}

float Vector3::getMagnitude(Vector3 vector) 
{
    return sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
}

Vector3 Vector3::getUnitVector(Vector3 vector) 
{
    return vector / vector.magnitude();
}

float Vector3::dotProduct(Vector3 vec1, Vector3 vec2) 
{
    return (vec1.x * vec2.x) + (vec1.y * vec2.y) + (vec1.z * vec2.z);
}

float Vector3::angleBetween(Vector3 vec1, Vector3 vec2) 
{
    //cos theta = (dotproduct) / (||vec1|| * ||vec2||)
    float ctheta = dotProduct(vec1, vec2) / (vec1.magnitude() * vec2.magnitude());
    float radians = acos((float)ctheta); //Calculate angle in radians
    return radians * (180.0 / M_PI); //Return result in degrees
}

Vector3 Vector3::ones() 
{
    return Vector3(1, 1, 1);
}

Vector3 Vector3::crossProduct(Vector3 vec1, Vector3 vec2) 
{
    float _x = vec1.y * vec2.z - vec1.z * vec2.y;
    float _y = vec1.z * vec2.x - vec1.x * vec2.z;
    float _z = vec1.x * vec2.y - vec1.y * vec2.x;

    return Vector3(_x, _y, _z);
}
