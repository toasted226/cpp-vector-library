#include <iostream>
#include <stdexcept>
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
