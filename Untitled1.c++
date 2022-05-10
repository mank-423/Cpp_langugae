#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream mak("Defence");
    mak << "Air Force \n";
    mak << "Navy \n";
    mak << "Army \n";
    mak.close();
    
    ///Reading Defence file
    ifstream mank("Defence");
    string line;
    while (getline(mank,line))
    {
        cout << line;
    }
    mank.close();

    return 0;
}
