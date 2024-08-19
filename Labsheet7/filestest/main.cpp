#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, y, z;
    ifstream f;
    f.open("C:\\Users\\vedja\\OneDrive\\Desktop\\numbers.txt");

    if (!f)
    {
        cout << "File numbers.txt not Found !" << endl;
        return -1;
    }
    f >> x >> y >> z;
    cout << "Values read from the file are: " << x << " " << y << " " << z << endl;
    f.close();
    return 0;
}




