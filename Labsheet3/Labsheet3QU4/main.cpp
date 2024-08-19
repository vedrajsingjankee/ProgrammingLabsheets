#include <iostream>

using namespace std;

int main()
{
    int entry,leaving,total1,total2;
    total1=0;
    total2=0;
    cout << "Enter time of entry: " << endl;
    cin>>entry;
    cout << "Enter time of leaving: " << endl;
    cin>>leaving;
    if(entry<21 && leaving<21){
       total1=(leaving-entry)*250;
    }
    if(entry>21 && leaving>21){
        total2=(leaving-entry)*175;
    }
    if(entry<21 && leaving>21){
        total1=((21-entry)*250)+((leaving-21)*175);
    }
    cout<<"The total bill is "<<total1+total2<<endl;
    return 0;
}
