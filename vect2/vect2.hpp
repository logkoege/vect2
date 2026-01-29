#pragma once

#include <iostream>

class vect2
{
    private:
        int x;
        int y;

    public:
        vect2();
        vect2(int num1, int num2);
        ~vect2();
        vect2(const vect2 &other);

        vect2 &operator=(const vect2 &other);

        int operator==(const vect2 &other) const;
        int operator!=(const vect2 &other) const;


        int operator[](int i) const;
        int &operator[](int i);

        vect2 operator++(int);
        vect2 operator--(int);
        vect2& operator++();
        vect2& operator--();

        vect2& operator*=(const vect2 &other);
        vect2& operator+=(const vect2 &other);
        vect2& operator-=(const vect2 &other);

        vect2& operator*=(const int &other);
        vect2& operator+=(const int &other);
        vect2& operator-=(const int &other);

        vect2 operator*(const vect2 &other)const;
        vect2 operator+(const vect2 &other)const;
        vect2 operator-(const vect2 &other)const;

        vect2 operator*(const int &other)const;
        vect2 operator+(const int &other)const;
        vect2 operator-(const int &other)const;
    };

    vect2 operator*(int i, const vect2 &other);
    
    vect2 operator-(const vect2 &other);
    
    std::ostream& operator<<(std::ostream &out, const vect2 &other);


// v1: {0, 0}
// v1: {0, 0}
// v2: {1, 2}
// v3: {1, 2}
// v4: {1, 2}
// {1, 2}
// {3, 4}
// {3, 4}
// {1, 2}
// v1: {-84, -168}
// v2: {20, 40}
// -v2: {-20, -40}
// v1[1]: -168
// v1[1]: 12
// v3[1]: 2
// v1 == v3: 0
// v1 == v1: 1
// v1 != v3: 1
// v1 != v1: 0