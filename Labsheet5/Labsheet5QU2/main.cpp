#include <iostream>

using namespace std;

int main()
{
    int sum,multiple=0;
    do{
        multiple=multiple+5;
        sum+=multiple;
    }while(multiple<=100);
    cout << sum << endl;
    return 0;
}
