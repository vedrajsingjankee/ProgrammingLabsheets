#include <iostream>
#include <cmath>
//QU2
using namespace std;

int main()
{
   int a,b,c;
    float disc,root1,root2,x,y,var1,var2,var3;
    cout << "Enter coefficients a,b and c: " << endl;
    cin >>a>>b>>c;
    disc=((b*b)-(4*a*c));
    y=(sqrt(-(disc)))/(2*a);
    var1=-b;
    var2=2*a;
    var3=var1/var2;
    x=var3;
    cout<<x<<endl;
    cout<<"1st root is: "<<x<<"+"<<y<<"i"<<endl;
    cout<<"2nd root is: "<<x<<"-"<<y<<"i"<<endl;
    return 0;
}
