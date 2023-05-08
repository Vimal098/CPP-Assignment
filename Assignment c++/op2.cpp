
#include<iostream>
using namespace std;
int area(int l,int b)
{
       	cout<<"\nArea of rectangle is "<<l*b;

}
float area(float r)
{
   	cout<<"\nArea of circle is "<<3.14*r*r;
}
double area(double b,double h)
{
     cout<<"\nArea of triangle is"<<((b*h)/2);
}
int main()
{
  area(45,12);
  area(7);
  area(12.5,6.6);
  return 0;
}