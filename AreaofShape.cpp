#include <iostream>
#include <limits>

using namespace std;
 double SquareArea(double side);
 double RectangleArea(double length,double width);
 double TriangleArea(double base,double height);

 int main(){
    int selection = 0;
    bool running = true;

    while(running){
        cout <<"please select the area of the shape to calculate"<<endl;
        cout <<"1. square \n" "2. Rectangle\n""3. Triangle \n""4. Quit program" <<endl;
        cout <<"Enter selection: "<<endl;

        if(!(cin>>selection)){
            cout <<"your input was not a number";
            cout <<"please enter a valid number"<<endl;

        }
        switch(selection){
            case 1:
            {
            double side = 0;
            cout <<"enter the side length: ";
            cin >>side;
            cout <<"Area of the square: "<<SquareArea(side)<<endl;
            break;
            }

            case 2:
            {
            double length = 0, width = 0;
            cout <<"Enter the length: ";
            cin >>length;
            cout <<"Enter the width: ";
            cin >>width;
            cout <<"Area of the rectangle: "<<RectangleArea(length,width)<<endl;
            }

            case 3:
            {
            double base = 0, height = 0;
            cout <<"Enter the base: ";
            cin >>base;
            cout <<"Enter the height: ";
            cin >>height;
            cout <<"Area of triangle: "<<TriangleArea(base,height)<<endl;
            }
            
            case 4:
            {
            running = false;
            break;
            }


            
        }
        return 0;
    }
 }
 double SquareArea(double side){

    return side * side;
    
 }
 double RectangleArea(double length,double width){

    return length * width;
;
 }
 double TriangleArea(double base,double height){
    0.5 * base * height;
    return 0;
 }

 