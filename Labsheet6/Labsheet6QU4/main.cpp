#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int pop=495;
    int numberyear=0;
    float rate=1.2;
    for(int i;;){
            if(pop>1500){
                break;
            }
        pop=int(pop*rate);
        numberyear+=1;
        if(pop>1000){
            rate=1.1;
        }
    }
    cout << "Number of years elapsed: "<<numberyear<< endl;
    return 0;
}
