#include <iostream>
#include <cmath>
//QU7
using namespace std;

int main()
{
    int value;
    float root;
    cout << "Enter integer value: " << endl;
    cin>>value;
    root=sqrt(value);
    if((root-int(root))>0){
        cout<<"Value entered is a NOT perfect square!"<<endl;
    }
    else{
        cout<<"Value is a perfect square!"<<endl;
    }
    return 0;
}
