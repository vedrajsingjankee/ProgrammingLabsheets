#include <iostream>

using namespace std;

int main()
{
    int choice,n,sum;
    for(int i;;){
    sum=0;
    cout << "**********************************" << endl;
    cout << "********Counting in Maths*********" << endl;
    cout << "**********************************" << endl;
    cout << "1.Sum of first n counting numbers" << endl;
    cout << "2.Sum of first nth odd numbers" << endl;
    cout << "3.Number of division by two" << endl;
    cout << "0.Exit" << endl;
    cout << "**********************************" << endl;
    cout << "Enter your choice (0-3):" << endl;
    cin >> choice;
    if(choice==0){
        break;
    }
    while(choice!=0 && choice!=1 && choice!=2 && choice!=3){
        cout<<"Invalid choice enter again: ";
        cin >> choice;
    }
    switch(choice){
    case 1:
        cout<<"Input n: "<<endl;
        cin>> n;
        while(int(n)<n){
            cout<<"Invalid value of n enter again: ";
            cin>>n;
        }
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout<<"Sum of n counting numbers is :"<<sum<<endl;
        break;
    case 2:
        cout<<"Input n: "<<endl;
        cin>> n;
        while(int(n)<n){
            cout<<"Invalid value of n enter again: ";
            cin>>n;
        }
        for(int i=1;i<=n;i++){
            sum+=i;
            i++;
        }
        cout<<"Sum of odd numbers: "<<sum<<endl;
        break;
    case 3:
        cout<<"Input n: "<<endl;
        cin>> n;
        while(int(n)<n){
            cout<<"Invalid value of n enter again: ";
            cin>>n;
        }
        do{
            n=n/2;
            sum+=1;
        }while(n!=1);
        break;
    }

    }
    return 0;
}
