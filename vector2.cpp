#include <iostream>
#include <stdexcept>
#include <cmath>
#include "vectorlib.h"

Vector2::Vector2() 
{
    x = 0.0;
    y = 0.0;
}

Vector2::Vector2(float _x, float _y) 
{
    x = _x;
    y = _y;
}

Vector2::~Vector2() {}

Vector2 Vector2::operator + (Vector2 const &vec) 
{
    Vector2 res;
    res.x = x + vec.x;
    res.y = y + vec.y;
    return res;
}

Vector2 Vector2::operator - (Vector2 const &vec) 
{
    Vector2 res;
    res.x = x - vec.x;
    res.y = y - vec.y;
    return res;
}

Vector2 Vector2::operator * (Vector2 const &vec) 
{
    Vector2 res;
    res.x = x * vec.x;
    res.y = y * vec.y;
    return res;
}

Vector2 Vector2::operator / (Vector2 const &vec) 
{
    Vector2 res;
    try 
    {
        res.x = x / vec.x;
        res.y = y / vec.y;
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Vector exception occured" << std::endl
            << e.what();
    }
    return res;
}

Vector2& Vector2::operator += (Vector2 const &vec) 
{
    this->x += vec.x;
    this->y += vec.y;

    return *this;
}

Vector2& Vector2::operator -= (Vector2 const &vec) 
{
    this->x -= vec.x;
    this->y -= vec.y;

    return *this;
}

Vector2& Vector2::operator *= (Vector2 const &vec) 
{
    this->x *= vec.x;
    this->y *= vec.y;

    return *this;
}

Vector2& Vector2::operator /= (Vector2 const &vec) 
{
    try 
    {
        this->x /= vec.x;
        this->y /= vec.y;
    }
    catch (std::runtime_error& e) 
    {
        std::cout << "Vector exception occured" << std::endl
            << e.what();
    }

    return *this;
}

std::string Vector2::toStdString() 
{
    return std::to_string(x) + ", " + std::to_string(y);
}

Vector2 Vector2::operator * (const float &val) 
{
    Vector2 res;
    res.x *= val;
    res.y *= val;

    return res;
}

Vector2 Vector2::operator / (const float &val) 
{
    Vector2 res;
    try 
    {
        res.x /= val;
        res.y /= val;
    }
    catch (std::runtime_error& e) 
    {
        std::cout << "Vector exception occured" << std::endl
            << e.what();
    }

    return res;
}

Vector2& Vector2::operator *= (const float &val) 
{
    this->x *= val;
    this->y *= val;

    return *this;
}

Vector2& Vector2::operator /= (const float &val) 
{
    try 
    {
        this->x /= val;
        this->y /= val;
    }
    catch (std::runtime_error e) 
    {
        std::cout << "Vector exception occured" << std::endl
            << e.what();
    }

    return *this;
}

float Vector2::magnitude() 
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

Vector2 Vector2::normalize() 
{
    Vector2 vec(x, y);
    vec /= vec.magnitude();

    return vec;
}

float vector2::getMagnitude(Vector2 vector) 
{
    return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}

Vector2 vector2::getUnitVector(Vector2 vector) 
{
    return vector / vector.magnitude();
}

float vector2::dotProduct(Vector2 vec1, Vector2 vec2) 
{
    return (vec1.x * vec2.x) + (vec1.y * vec2.y);
}

float vector2::angleBetween(Vector2 vec1, Vector2 vec2) 
{
    //cos theta = (dotproduct) / (||vec1|| * ||vec2||)
    float ctheta = dotProduct(vec1, vec2) / (vec1.magnitude() * vec2.magnitude());
    float radians = acos((float)ctheta); //Calculate angle in radians
    return radians * (180.0 / M_PI); //Return result in degrees
}

Vector2 vector2::ones() 
{
    return Vector2(1, 1);
}
