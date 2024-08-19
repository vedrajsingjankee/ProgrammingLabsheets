#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum,count=0;
    string ans;
    float evencheck;
    do{
    cout << "Enter number: " << endl;
    cin>>number;
    while(number<0){
        cout<<"Wrong input, enter only positive number: ";
        cin >>number;
    }
    evencheck=number%2;
    if(evencheck==0){
        sum+=number;
        count+=1;
    }
    cout<<"Do you want to enter another number? Yes or No?: ";
    cin>>ans;
    }while(ans=="Yes");
    cout<<"Number of positive number input is "<<count<<"and sum of these number is "<<sum<<endl;
    return 0;
}
