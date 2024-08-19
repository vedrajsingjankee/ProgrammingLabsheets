#include <iostream>

using namespace std;

int main()
{
    int number,sumpositive,countposi,countnega;
    number=0;
    sumpositive=0;
    countposi=0;
    countnega=0;
    for(int i;;){
        cout<<"Enter number : "<<endl;
        cin>>number;
        if(number==-2){
            break;
        }
        if(number>0){
            sumpositive=sumpositive+number;
            countposi=countposi+1;
        }
        if (number<0){
            countnega=countnega+1;
        }
    }
    cout<<"Sum of positive numbers: "<<sumpositive<<endl;
    return 0;
}
