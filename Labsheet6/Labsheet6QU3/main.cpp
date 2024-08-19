#include <iostream>

using namespace std;

int main()
{
    int mark,sum;
    for(int i=1;i<=5;i++){
     sum=0;
     for(int j=1; j<=3;j++){
      cout << "Enter mark for student "<<i<<"in subject"<<j<< endl;
      cin>>mark;
      sum+=mark;
     }
      cout<<"Sum of mark: "<<sum<<"and average: "<<sum/3<<endl;
    }
    return 0;
}
