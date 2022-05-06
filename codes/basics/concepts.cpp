#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "**************************************************" << endl;
    // built in data type
    cout << "input : " << endl;
    int a = 1;
    double b = 3.1415;
    char c = 'c';
    bool d = false;
    string e;
    // io
    cin >> e;
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    cout << "**************************************************" << endl;
    // operators
    cout << a + b << endl;
    cout << (a < b) << endl;    
    cout << a++ << endl;
    cout << ++a << endl;
    cout << "**************************************************" << endl;
    // flow control
    for (int i = 0; i < 10; i++) {
        cout << "i = " << i << "  ";
    }
    cout << endl;
    cout << "**************************************************" << endl;

    return 0;
}
