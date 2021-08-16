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

float getMagnitude(Vector2 vector) 
{
    return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}

Vector2 getUnitVector(Vector2 vector) 
{
    vector /= vector.magnitude();

    return vector;
}
