#include "vect2.hpp"

vect2::vect2() : x(0), y(0){}

vect2::~vect2(){}

vect2::vect2(int num1, int num2) : x(num1), y(num2){}

vect2& vect2::operator=(const vect2 &other)
{
    this->x = other.x;
    this->y = other.y;
    return(*this);
}

vect2::vect2(const vect2 &other)
{
    this->x = other.x;
    this->y = other.y;
}    

int vect2::operator!=(const vect2 &other) const
{
    if (this->x != other.x || this->y != other.y)
        return (1);
    return (0);
}

int vect2::operator==(const vect2 &other) const
{
    if (this->x == other.x && this->y == other.y)
        return (1);
    return (0);
}

int vect2::operator[](int i) const
{
    if (i == 0)
        return(this->x);
    return(this->y);
}

int &vect2::operator[](int i)
{
    if (i == 0)
        return(this->x);
    return(this->y);
}

vect2 vect2::operator++(int)
{
    vect2 temp(*this);
    this->x++;
    this->y++;
    return(temp);
}

vect2 vect2::operator--(int)
{
    vect2 temp(*this);
    this->x--;
    this->y--;
    return(temp);
}



vect2& vect2::operator*=(const vect2 &other)
{
    this->x = this->x * other.x;
    this->y = this->y * other.y;
    return (*this);
}

vect2& vect2::operator+=(const vect2 &other)
{
    this->x = this->x + other.x;
    this->y = this->y + other.y;
    return (*this);
}
vect2& vect2::operator-=(const vect2 &other)
{
    this->x = this->x - other.x;
    this->y = this->y - other.y;
    return (*this);
}

vect2& vect2::operator*=(const int &other)
{
    this->x = this->x * other;
    this->y = this->y * other;
    return (*this);
}
vect2& vect2::operator+=(const int &other)
{
    this->x = this->x + other;
    this->y = this->y + other;
    return (*this);
}
vect2& vect2::operator-=(const int &other)
{
    this->x = this->x - other;
    this->y = this->y - other;
    return (*this);
}

vect2 vect2::operator*(const vect2 &other)const
{
    vect2 temp(*this);
    temp.x = temp.x * other.x;
    temp.y = temp.y * other.y;
    return(temp);
}
vect2 vect2::operator+(const vect2 &other)const
{
    vect2 temp(*this);
    temp.x = temp.x + other.x;
    temp.y = temp.y + other.y;
    return(temp);
}
vect2 vect2::operator-(const vect2 &other)const
{
    vect2 temp(*this);
    temp.x = temp.x - other.x;
    temp.y = temp.y - other.y;
    return(temp);
}

vect2 vect2::operator*(const int &other)const
{
    vect2 temp(*this);
    temp.x = temp.x * other;
    temp.y = temp.y * other;
    return(temp);
}
vect2 vect2::operator+(const int &other)const
{
    vect2 temp(*this);
    temp.x = temp.x + other;
    temp.y = temp.y + other;
    return(temp);
}
vect2 vect2::operator-(const int &other)const
{
    vect2 temp(*this);
    temp.x = temp.x - other;
    temp.y = temp.y - other;
    return(temp);
}

vect2 operator*(int i, const vect2 &other)
{
    vect2 temp = other;
    temp *= i;
    return (temp);
}

std::ostream& operator<<(std::ostream &out, const vect2 &other)
{
    out << "{" << other[0] << ", " << other[1] << "}";
    return(out);
}    

vect2 operator-(const vect2 &other)
{
    vect2 temp(-other[0], -other[1]);
    return(temp);
}