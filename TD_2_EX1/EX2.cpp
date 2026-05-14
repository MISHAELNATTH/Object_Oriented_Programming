#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

class Point3D {
    private:
    float x,y,z; // private attributes
    public:
    // constuctors
    Point3D(){          // fill X Y Z with random values (from 0 to 100)
        x=rand()%101;
        y=rand()%101;
        z=rand()%101;
    }; 
    Point3D(const float &newx, const float &newy, const float &newz){           // fill XYZ values
        x=newx;
        y=newy;
        z=newz;
    }; 
    
    // Setters and getters
    void setXYZ(const float &newx, const float &newy, const float &newz){
        x=newx;
        y=newy;
        z=newz;
    };
    void setX(const float &newx){
        x=newx;
    };
    void setY(const float &newy){
        y=newy;
    };
    void setZ(const float &newz){
        z=newz;
    };

    float getX(){
        return x;
    };
    float getY(){
        return y;
    };
    float getZ(){
        return z;
    };
    // other methods
    void print(){
        std :: cout <<"X, Y, Z - "  << "("<< x << ", " << y << ", " << z << ")" << std:: endl;
        };
        
        // prints the coordinates of the point
    float distanceTo(const Point3D &otherPoint3D){
        return sqrt(pow(x-otherPoint3D.x,2)+pow(y-otherPoint3D.y,2)+pow(z-otherPoint3D.z,2));


    };
};

int main(){
    Point3D point1; // random values
    Point3D point2(1.0f, 2.0f, 3.0f); // specific values

    std :: cout << "Point 1: " << std :: endl;
    point1.print();
    std :: cout << "Point 2: " << std :: endl;
    point2.print();

    std :: cout << "Distance between Point 1 and Point 2: " << point1.distanceTo(point2) << std :: endl;

    return 0;


}
