#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "EX3Trajectory.hpp"

int main(){
    Trajectory trajactory;
    trajactory.print();
    std :: cout << "total Distance: " << trajactory.getTotalDistance() << std :: endl;

    trajactory.getPoint(0).setXYZ(1,2,3);
    trajactory.getPoint(1).setXYZ(4,5,6);
    trajactory.getPoint(5).setXYZ(7,8,9);
    trajactory.print();
    std :: cout << "total Distance: " << trajactory.getTotalDistance() << std :: endl;
}