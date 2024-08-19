#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float sidea,sideb,sidec;
    float anglea,angleb,anglec,area;
    cout << "Please enter length of 1st and 2nd side of triangle: "<< endl;
    cin >> sideb >> sidec ;
    cout <<"Enter angle in middle: "<<endl;
    cin >> anglea;
    sidea= sqrt((pow(sideb,2))+(pow(sidec,2))-(2*sideb*sidec*cos(anglea)));
    angleb=asin((sideb/sidea)*sin(anglea));
    anglec= M_PI - anglea-angleb;
    area=0.5*sideb*sidec*sin(anglea);
    cout<<"Length of 3rd side is "<<sidea<<endl;
    cout<<"Other angles are "<<angleb<<","<<anglec<<endl;
    cout<<"Area of triangle is "<<area<<endl;
    return 0;
}
