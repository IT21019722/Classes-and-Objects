#include<iostream>
#include<iomanip>
using namespace std;

class Rectangle{
  private:
    int width;
    int length;
  public:
    void setWidth(int w);
    void setLength(int l);
    float calcArea();
};

void Rectangle::setWidth(int w)
{
  width = w;
}
void Rectangle::setLength(int l)
{
  length = l;
}
float Rectangle::calcArea()
{
  return length * width;
}

int main()
{
  Rectangle r1;
  r1.setWidth(10);
  r1.setLength(20);

  cout<<"The area of the reactangle is: ";
  cout<<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<r1.calcArea()<<endl;

  return 0;
}