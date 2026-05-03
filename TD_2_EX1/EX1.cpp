#include <iostream>
#include <list>
using std::string;
using namespace std;

class TextRectangle{
    private:
    int Width;
    int Height;
    
    public:

    void setHeight(int height){
        if (height>0 && height <10){
            Height  = height;
        }
    }
    int getHeight(){
        return Height;
    }

    void setWidth(int width){
        if (width>0 && width <10){
            Width = width;
        }
    }
    int getWidth(){
        return Width;
    }

    int getArea(){
        return Width*Height;
    }
    int getPerimeter(){
        return 2*(Height + Width);
    }

    void print(){
        std :: cout <<"Height - "<< Height << std::endl;
        std :: cout <<"Width - " << Width << std :: endl;
        std :: cout << "Perimeter - "<< getPerimeter() << std :: endl;
        std :: cout << "Area - "<< getArea() << std :: endl;
    }

    void drawArea(const char& pattern){
        for (int i=0; i<Height; i++){
            for (int j=0; j<Width; j++){
                std :: cout<<" "<<pattern;
            }
            std::cout<< std::endl;
        }
        std::cout<< std::endl;

    }
    void drawPerimeter(const char& pattern){
        for (int i=0; i<Height; i++){
            for (int j=0; j<Width; j++){
                if (i==0 || i==Height-1 || j==0 || j==Width-1){
                    std :: cout<<" "<<pattern;
                }else{
                    std :: cout<<"  ";
                }
            }
            std::cout<< std::endl;
        }
        std::cout<< std::endl;
        
    }



};

int main(){
    TextRectangle rectangle;
    rectangle.setHeight(7);
    rectangle.setWidth(4);
    rectangle.print();
    rectangle.drawArea('*');
    rectangle.drawPerimeter('*');
}
