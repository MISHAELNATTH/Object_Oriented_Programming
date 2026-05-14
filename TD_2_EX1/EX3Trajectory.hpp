#include "EX2Point3D.hpp"

constexpr size_t numberOfPoints = 10;
class Trajectory{
    private:
    Point3D points[numberOfPoints];
    
    public:
    void print(){ // print the coordinates of all points
        for (int i=0; i<10; i++){
            std :: cout << "(X,Y,Z) : " << points[i].getX() <<", " << points[i].getY() << ", " << points[i].getZ() << std :: endl;
        }
        

    }; 
    
    Point3D & getPoint(const size_t &n){ // returns the reference of point n
        if(n>=0 && n<numberOfPoints){
            return points[n];
        }
    }; 
    float getTotalDistance(){
        float totalDistance=0;
        for (int i=0; i<numberOfPoints-1; i++){
            totalDistance+=points[i].distanceTo(points[i+1]);
        }
        return totalDistance;
    };
};
