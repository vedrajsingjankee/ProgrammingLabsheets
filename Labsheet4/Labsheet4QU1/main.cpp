#include <iostream>

using namespace std;

int main()
{
    int x,y,fee;
    string head;
    int noadult,nochild;
    cout << "Enter x and y: " << endl;
    cin>>x>>y;
    cout<<"Enter number of adults: ";
    cin>>noadult;
    cout<<"Enter number of children: ";
    cin>>nochild;
    cout<<"Is the head of family a member? Enter Yes or No: ";
    cin>>head;
    if(head=="Yes"){
        fee=(x*noadult)+(y*nochild);
    }
    else{
        fee=(2*x*noadult)+(1.5*y*nochild);
    }
    cout<<"Fee charged is "<<fee<<endl;
    return 0;
}
