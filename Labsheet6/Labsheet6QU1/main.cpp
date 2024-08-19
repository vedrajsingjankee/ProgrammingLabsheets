#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number=0;
    float root;
    for(int i;;){
        cout<<"Enter a positive number: "<<endl;
        cin>>number;
        if(number<0)
            break;
        root=sqrt(number);
        cout<<"Root of number is "<<root<<endl;
    }
    while(number>=0);
    return 0;
}
