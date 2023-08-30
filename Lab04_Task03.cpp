#include<iostream>
#include<cmath>

class Rectangle
{
  private:
  float length;
  float width;

  public:

  //default const
  Rectangle()
  {
    length = 1.0;
    width = 1.0;
  }

  //overloaded
  Rectangle(float in_length,float in_width)
  {
    length = setlength(in_length);
    width = setWidth(in_width);

  }

  int setlength(float in_length)
  {
     if(in_length >= 1.0 && in_length <= 20.0)
     {
        length = in_length;
     }

     else
     std::cout<<"Input length is out of accepted range\n";
  }

  int setWidth(float in_width)
  {
   if(in_width>= 1.0 && in_width <= 20.0)
     {
        width = in_width;
     }

     else
     std::cout<<"Input width is out of accepted range\n";
  }

  float getWidth()
  {
    return width;
  }

  float getLength()
  {
    return length;
  }

  float perimeter()
  {
    return 2*(length + width);
  }

  float area()
  {
    return length*width;
  }

  float getAngle()
  {
    float angle_rad = atan(width/length);
    float angle_degree = angle_rad * (180/M_PI);
    return angle_degree;
  }

  float getDiagonalLength()
  {
    return sqrt((length*length)+(width*width));
  }

  void showRectangleInfo()
  {
    std::cout<<"Length: "<<getLength()<<"\n";
    std::cout<<"Width: "<<getWidth()<<"\n";
    std::cout<<"Diagonal Length: "<<getDiagonalLength()<<"\n";
    std::cout<<"Angle between length & diagonal: "<<getAngle()<<"\n";
    std::cout<<"Perimeter: "<<perimeter()<<"\n";
    std::cout<<"Area: "<<area()<<"\n";
  }

};

int main()
{
    Rectangle rectangle(30.0,25.0);

    rectangle.setlength(15.0);
    
    rectangle.setWidth(10.0);
    
    rectangle.showRectangleInfo();

   


}