#include <iostream>

using namespace std;

int main()
{
 int yearofbirth,age;
    cout << "Please enter your year of birth: " << endl;
    cin>>yearofbirth;
    age = 2023-yearofbirth;
    if (age<18){
        cout<<"You are a child aged "<<age<<" !"<<endl;
    }
    else{
        cout<<"You are an adult aged "<<age<<" years old!"<<endl;
    }
}
