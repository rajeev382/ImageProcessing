#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    Polygon (int a, int b) : width(a), height(b) {
        cout<<"Constructor of Polygon "<<a<<b<<"\n";
    }
    virtual int area (void) =0;
     int printarea()
      { 
          cout<<width<<height<<"\n";
          cout<<"Area of Polygon \n";
         cout << this->area() << '\n';
      return 0;}
};

class Rectangle: public Polygon {
  public:
    Rectangle(int a,int b) : Polygon(a,b) {
        cout<<"Constructor of Rectangle "<<a<<b<<"\n";
    }
    int area()
      { cout<<"Area of Rectangle \n";
          return width*height; }
};

class Triangle: public Polygon {
  public:
    Triangle(int a,int b) : Polygon(a,b) {
        cout<<"Constructor of Triangle "<<a<<b<<"\n";
    }
    int area()
      { cout<<"Area of Triangle \n";
          return width*height/2; }
};

int main () {
  Polygon * ppoly1 = new Rectangle (4,5);
  Polygon * ppoly2 = new Triangle (1,3);
  ppoly1->printarea();
  ppoly2->printarea();
  delete ppoly1;
  delete ppoly2;
}

