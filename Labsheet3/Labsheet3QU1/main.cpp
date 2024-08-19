#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radius;
    float area;
    cout << "Please enter radius of circle: " << endl;
    cin>>radius;
    while(radius<=0){
        cout<<"Invalid value of radius entered. Please enter valid radius: "<<endl;
        cin>>radius;
    }
    area=M_PI*radius*radius;
    cout<<"Area of circle is "<<area<<endl;
    return 0;
}
