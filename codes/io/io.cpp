#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int foo = 100;
    int baz = 20;
    cin >> foo >> baz;
    string bar; 
    cout << foo << std::setw(4) << baz << endl;
    getline(cin, bar);
    cout << bar << endl;
    return 0;
}

