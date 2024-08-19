#include <iostream>

using namespace std;

int main()
{
    int mark;
    char grade;
    cout << "Enter mark: " << endl;
    cin>>mark;
    if(mark>=70 && mark<=100){
        grade='A';
    }
     if(mark>=60 && mark<=69){
        grade='B';
    }
     if(mark>=50 && mark<=59){
        grade='C';
    }
     if(mark>=40 && mark<=49){
        grade='D';
    }
     if(mark<40){
        grade='F';
    }
     if(mark>100 || mark<0){
        cout<<"Invalid mark!";
    }
    else{
            cout<<"Your grade is "<<grade<<endl;
    }
    return 0;
}
