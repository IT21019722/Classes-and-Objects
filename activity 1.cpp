#include<iostream>
#include<iomanip>
using namespace std;

class Student{
  private:
    int studentNo;
    int marks1;
    int marks2;
    int marks3;
  public:
    void setStudentNo(int no);
    void assignMarks(int m1, int m2, int m3);
    float calcAvg();
};

void Student::setStudentNo(int no)
{
  studentNo = no;
}
void Student::assignMarks(int m1, int m2, int m3)
{
  marks1 = m1;
  marks2 = m2;
  marks3 = m3;
}
float Student::calcAvg()
{
  return (marks1 + marks2 + marks3)/3.0;
}

int main()
{
  Student s1, s2;

  s1.setStudentNo(123);
  s1.assignMarks(80, 90, 75);

  s2.setStudentNo(234);
  s2.assignMarks(65, 78, 70);

  cout<<"The Average of studetn 1: ";
  cout<<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<s1.calcAvg()<<endl;
  cout<<"The Average of student 2: ";
  cout<<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<s2.calcAvg()<<endl;
}