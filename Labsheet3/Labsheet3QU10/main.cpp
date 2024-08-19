#include <iostream>

using namespace std;

int main()
{
    int speed;
    int fine;
    cout << "Enter speed" << endl;
    cin>>speed;
    while(speed<0 || speed>300){
        cout<<"Invalid speed enter speed between 0 and 300:";
        cin>>speed;
    }
    if(speed==90){
        fine=500;
         cout<<"Fine is "<<fine<<endl;
    }
    else if(speed>90){
        fine=500+((speed-90)*10);
         cout<<"Fine is "<<fine<<endl;
    }
    else if(speed<90){
    cout<<"Speed limit not reached!"<<endl;
    }
    return 0;
}
