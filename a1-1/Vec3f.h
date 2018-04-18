//
// Created by Alex on 16.04.2018.
//

#pragma once

#include <array>
#include <ostream>
namespace my {
class Vec3f{

public:
    Vec3f(float x =0,float y=0,float z =0);

    Vec3f& operator+=(const my::Vec3f rhs);
    Vec3f operator+(const my::Vec3f& rhs);

    Vec3f operator-();
    bool operator==( my::Vec3f rhs);
    bool operator!=( my::Vec3f rhs);


    static constexpr int dimension = 3;
    float& operator[] (const int index);
    const float& operator[] (const int index)const;

private:
     float v_[3];
};

std::ostream& operator<<(std::ostream& os, const my::Vec3f rhs);
float dot(const my::Vec3f lhs,const my::Vec3f rhs);

}