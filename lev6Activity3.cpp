#include<iostream>

class Date
{
  private:
    int day;
    int month;
    int year;
  public:
    void setDate(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay();
    int getMonth();
    int getYear();

};
void setDate(int d);
{
  day = d;
}
void setMonth(int m)
{
  month = m;
}
void setYear(int y)
{
  year = y;
}
int getDay()
{
  return day;
}
int getMonth()
{
  return month;
}
int getYear()
{
  return year;
}

int main()
{


  return 0;
}