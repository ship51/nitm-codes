// Write the definition for a class called Rectangle that has floating point data members
// length and width. The class has the following member functions:

// void setlength(float) to set the length data member
// void setwidth(float) to set the width data member
// float perimeter() to calculate and return the perimeter of the rectangle
// float area() to calculate and return the area of the rectangle
// void show() to display the length and width of the rectangle
// int sameArea(Rectangle) that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.

// 1. Write the definitions for each of the above member functions.
// 2. Write main function to create two rectangle objects. Set the length and width of the first rectangle to 5 and 2.5. Set the length and width of the second rectangle to 5 and 18.9. Display each rectangle and its area and perimeter.
// 3. Check whether the two Rectangles have the same area and print a message indicating the result. Set the length and width of the first rectangle to 15 and 6.3. Display each Rectangle and its area and perimeter again. Again, check whether the two Rectangles have the same area and print a message indicating the result.



#include <iostream>
using namespace std;

class Rectangle{

    float length, width;
public:
    void setlength(float l)
    {
        length = l;
    }
    void setwidth(float w)
    {
        width = w;
    }
    float perimeter()
    {
        return 2*(length + width);
    }
    float area()
    {
        return length*width;
    }
    void show()
    {
        cout<<"\nLength = "<<length;
        cout<<"\nWidth = "<<width;
    }

    int sameArea(Rectangle r)
    {
        if ((this->length) * (this->width) == r.length*r.width)
            return 1;
        else
            return 0;
    }
};


int main()
{
    Rectangle r1, r2;
    r1.setlength(5);            //setting values of r1
    r1.setwidth(2.5);
    r2.setlength(5);            //setting values of r2
    r2.setwidth(18.9);

    cout<<"\nRectangle 1: ";
    r1.show();
    cout<<"\nArea : "<<r1.area();
    cout<<"\nPerimeter : "<< r1.perimeter();

    cout<<"\n";
    cout<<"\nRectangle 2: ";
    r2.show();
    cout<<"\nArea : "<<r2.area();
    cout<<"\nPerimeter : "<<r2.perimeter();

    //comparing area of the two rectangles
    if (r1.sameArea(r2))
        cout<<"\n\nThe two rectangles have the same area.";
    else
        cout<<"\n\nThe two rectangles do not have the same area.";


    r1.setlength(15);               //setting values of r1
    r1.setwidth(6.3);


    cout<<"\n\nRectangle 1: ";
    r1.show();
    cout<<"\nArea : "<<r1.area();
    cout<<"\nPerimeter : "<<r1.perimeter();

    cout<<"\n";
    cout<<"\nRectangle 2: ";
    r2.show();
    cout<<"\nArea : "<<r2.area();
    cout<<"\nPerimeter : "<<r2.perimeter();


    //comparing area of the two rectangles
    if (r1.sameArea(r2))
        cout<<"\n\nThe two rectangles have the same area.";
    else
        cout<<"\n\nThe two rectangles do not have the same area.";

    return 0;
}
