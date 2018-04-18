#include <iostream>
#include "Vec3f.h"
#include "test11.cpp


int main() {
    Vec3f a(1,1,3);
    Vec3f b(1,1,3);
    Vec3f c =-b;
    float x =dot(a,b);

    test_Vec3f();
    std::cout << x << std::endl;
    return 0;
}