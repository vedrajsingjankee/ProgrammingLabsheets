#include <iostream>
#include <cmath>
//QU3
using namespace std;

int main()
{
    int side1,side2;
    float hypo;
    cout << "Enter the 2 shorter sides of the right angle triangle: " << endl;
    cin>>side1>>side2;
    hypo=sqrt((side1*side1)+(side2*side2));
    cout<<"Length of hypothenuse is "<<hypo<<endl;
    return 0;
}
