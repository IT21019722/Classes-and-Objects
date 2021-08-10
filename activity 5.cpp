#include<iostream>
using namespace std;

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
void Date::setDate(int d)
{
  day = d;
}
void Date::setMonth(int m)
{
  month = m;
}
void Date::setYear(int y)
{
  year = y;
}
int Date::getDay()
{
  return day;
}
int Date::getMonth()
{
  return month;
}
int Date::getYear()
{
  return year;
}

int main()
{
  Date day1;
  int day, mon, yr;
  cout<<"Enter the day: ";
  cin>>day;
  cout<<"Enter the month: ";
  cin>>mon;
  cout<<"Enter the year: ";
  cin>>yr;

  day1.setDate(day);
  day1.setMonth(mon);
  day1.setYear(yr);
  cout<<day1.getDay()<<"/"<<day1.getMonth()<<"/"<<day1.getYear()<<endl;

  return 0;
}