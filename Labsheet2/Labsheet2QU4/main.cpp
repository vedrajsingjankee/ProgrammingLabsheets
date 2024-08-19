#include <iostream>
#include <cmath>
//QU5
using namespace std;

int main()
{
    int angle,length;
    float height=0;
    cout << "Enter angle ladder makes with floor: " << endl;
    cin >> angle;
    cout<<"Enter length of ladder: "<<endl;
    cin >> length;
    height= length*sin(angle);
    cout<<"Minimum height of wall: "<<height<<endl;
    return 0;
}
