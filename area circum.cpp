#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   double radius,area,circumferance;
   cout<<"enter the radius of circle:";
   cin>>radius;
   area=M_PI*radius*radius;
   circumferance=2*M_PI*radius;
   cout<<"area of the circle:"<<area;
    cout<<"area of the circumferance:"<<circumferance;
   return 0;
}
