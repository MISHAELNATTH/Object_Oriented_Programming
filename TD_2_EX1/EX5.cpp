#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "EX2Point3D.hpp"

class Vector{
    private:
    float dx, dy, dz;

    public:

    Vector(float dx = 0.0f, float dy = 0.0f, float dz = 0.0f) : dx(dx), dy(dy), dz(dz) {}

    Vector(Point3D p1, Point3D p2){
        dx = p2.getX() - p1.getX();
        dy = p2.getY() - p1.getY();
        dz = p2.getZ() - p1.getZ();
    }

    void print(){
        std :: cout << "dx, dy, dz - " << "(" << dx << ", " << dy << ", " << dz << ")" << std :: endl;
    }

    Vector sum(const Vector &v){
        Vector result;
        result.dx = dx + v.dx;
        result.dy = dy + v.dy;
        result.dz = dz + v.dz;
        return result;  
    }

    Vector product(float reel){
        return Vector(dx * reel, dy*reel, dz*reel);
    }

    bool eagalité(const Vector &v){
        return (dx == v.dx && dy == v.dy && dz == v.dz);
    }
};


int main(){
    Point3D p1(1,2,3);
    Point3D p2(4,5,6);
    Point3D p3;
    Point3D p4;

    Vector v1(p1 , p2);
    std :: cout << "Vector 1:" << std :: endl;
    v1.print();
    
    Vector v2(p3 , p4);
    std :: cout << "Vector 2:" << std :: endl;
    v2.print();

    Vector v3 = v1.sum(v2);
    Vector v4 = v1.product(5.0f);

    v3.print();
    v4.print();

    std :: cout << "egalité check" << std :: endl;
    if(v1.eagalité(v2)){
        std :: cout << "v1 and v2 are equal" << std :: endl;
    }else{
        std :: cout << "v1 and v2 are not equal" << std :: endl;
    }

    
  

}