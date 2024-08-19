#include <iostream>

using namespace std;

int main()
{
    int number,noofno,noleft;
    int max=-999999;
    int min=999999
    ;cout<< "Enter number of numbers to be entered: " << endl;
    cin>>noofno;
    for(int i=1;i<=noofno;i++){
        cout<<"Enter number: "<<endl;
        cin>>number;
        if(number < min){
            min=number;
        }
        else if(number>max){
            max =number;
        }
        cout<<"Number of numbers left to be entered: "<<noofno-i<<endl;
    }
    cout<<"Min number is "<<min<<"and max number is "<<max<<endl;

    return 0;
}
