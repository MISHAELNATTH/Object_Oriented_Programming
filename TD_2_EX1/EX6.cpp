#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

class Point2D{
    public:

    float x,y;

    Point2D(float px = 0.0f, float py= 0.0f){
        x = px;
        y = py;

    }
};

class Polygon{

    private:
    Point2D point[50];
    int nbpoints;

    public:
    
    Polygon(){  
        nbpoints = 0;
    }

    void addPoints(Point2D p){
        
        if (nbpoints < 50){
            point[nbpoints] = p;
            nbpoints++;
        }
        else{
            std :: cout << "Polygon points table is full" << std ::endl;
        }
    }

    float Area(){
        if (nbpoints<3){
            std :: cout << "No polygon" << std ::endl;
            return 0.0f;
        }

        float sum = 0.0f;

        for (int i=0; i<nbpoints; i++ ){
            int nextpoint = (i+1)%nbpoints;
            sum = sum + (point[i].x*point[nextpoint].y) - (point[nextpoint].x*point[i].y);
        }

        return 0.5f*abs(sum);
    }



};

int main(){
    Polygon p;
    p.addPoints(Point2D(0,0));
    p.addPoints(Point2D(0,2));
    p.addPoints(Point2D(2,0));
    
    std :: cout << "Ar of triangle:" << p.Area() << std ::endl; 
}