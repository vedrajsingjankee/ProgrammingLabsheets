#include <iostream>

using namespace std;

int main()
{
   int hours,wage;
    cout << "Enter number of hours: " << endl;
    cin >>hours;
    if (hours>40){
        wage=hours*150;
    }
    else{
        wage=hours*100;
    }
    cout<<"Total wages for the week: Rs "<<wage<<endl;
    return 0;
}
