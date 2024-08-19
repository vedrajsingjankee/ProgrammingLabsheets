#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter score: " << endl;
    cin>>score;
    while(score<0 || score>5){
        cout<<"Invalid score enter again: ";
        cin>>score;
    }
    if(score==5){
        cout<<"Your grade is A";
    }
    if(score==4){
        cout<<"Your grade is B";
    }
    if(score==3){
        cout<<"Your grade is C";
    }
    if(score==2){
        cout<<"Your grade is D";
    }
    if(score==1){
        cout<<"Your grade is E";
    }
    if(score==0){
        cout<<"Your grade is F";
    }
    return 0;
}
