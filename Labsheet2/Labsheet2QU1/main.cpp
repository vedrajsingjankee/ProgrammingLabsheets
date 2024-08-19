#include <iostream>
#include <cmath>
//QU1
using namespace std;

int main()
{
    int a,b,c;
    float discroot,root1,root2;
    cout << "Enter coefficients a,b and c: " << endl;
    cin >>a>>b>>c;
    discroot=sqrt((b*b)-(4*a*c));
    root1=(-b+(discroot))/(2*a);
    root2=(-b-(discroot))/(2*a);
    cout<<"1st root is: "<<root1<<endl;
    cout<<"2nd root is: "<<root2<<endl;

    return 0;
}
