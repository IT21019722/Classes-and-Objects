#include<iostream>
#include<iomanip>
using namespace std;

class Circle
{
  private:
    int radius;
  public:
    void setRadius(int no);
    float calcArea();
};

void Circle::setRadius(int no)
{
  radius = no;
}
float Circle::calcArea()
{
  float area;
  area = (22/7.0) * radius * radius;
  return area;
}

int main()
{
  Circle r1;
  r1.setRadius(5);

  cout<<"The area of the circle is: ";
  cout<<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<r1.calcArea()<<endl;


  return 0;
}