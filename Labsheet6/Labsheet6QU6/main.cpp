#include <iostream>

using namespace std;

int main()
{
    int x;
    string row="";
    cout << "Input value of x: " << endl;
    cin>>x;
    cout<<"*"<<endl;
    for(int i=1;i<=x;i++){
            row="";
            for(int j=1;j<=i+1;j++){
     row=row+"*";
    cout<<row<<endl;
            }
    }
    return 0;
}
