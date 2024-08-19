#include <iostream>

using namespace std;
// QU1:Program to input radius of circle and output area of circle
int main()
{
    int radius;
    double area;
    cout << "Please input radius of circle: " << endl;
    cin >> radius;
    area=3.142*radius*radius;
    cout<< "Area of circle is "<<area<<endl;
    return 0;
}
