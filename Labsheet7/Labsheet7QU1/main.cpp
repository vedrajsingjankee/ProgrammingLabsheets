#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int num=8;
    ofstream f;
    f.open("C:\\Users\\vedja\\OneDrive\\Desktop\\Squares");
    f<<"Numbers"<<" "<<"Square"<<endl;
    while(num!=0){
    cout << "Input number: " << endl;
    cin>>num;
    if(num==0)
        break;
    f<<num<<" "<<(num*num)<<endl;
    }
    f.close();
    return 0;
}
