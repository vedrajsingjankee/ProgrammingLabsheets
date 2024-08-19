#include <iostream>
#include <cmath>
//QU6
using namespace std;

int main()
{
    int x;
    int value;
    cout << "Please enter value of x: " << endl;
    cin>>x;
    value=(pow(x,5))+(3*(pow(x,4)))+(2*(pow(x,3)));
    cout<<"Value of expression is "<<value<<endl;
    return 0;
}
