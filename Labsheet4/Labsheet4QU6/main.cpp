#include <iostream>

using namespace std;

int main()
{
    int type;
    cout << "Enter type of car(1 to 5): " << endl;
    cin>>type;

    while(type<1 || type>5){
        cout<<"Invalid type enter again: ";
        cin>>type;
    }
    switch(type){
    case 1:
        cout<<"Car is of 1500cc";
        break;
    case 2:
        cout<<"Car is of 1500cc with automatic mirrors";
        break;
    case 3:
        cout<<"Car is of 1500cc with automatic mirrors and sensors at the front and rear";
        break;
    case 4:
        cout<<"Car is of 1200cc";
        break;
    case 5:
        cout<<"Car is of 1200cc and automatic gear";
        break;
    }
    return 0;
}
