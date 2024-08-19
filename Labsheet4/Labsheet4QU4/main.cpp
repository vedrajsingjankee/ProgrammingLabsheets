#include <iostream>

using namespace std;

int main()
{
    int tariff,units;
    float totalcharge;
    cout << "Enter tariff number: " << endl;
    cin>> tariff;
    switch(tariff){
    case 110:
        cout<<"Enter number of units consumed: ";
        cin>>units;
        if (units<=25){
            totalcharge=2.75*units;
        }
        if(units>25 && units<=50){
            totalcharge=((units-25)*3.25)+(25*2.75);
        }

    }
    return 0;
}
