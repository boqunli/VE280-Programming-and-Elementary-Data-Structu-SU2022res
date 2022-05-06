#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}


int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 5;
    cout << "a + b = " << add(a, b) << endl;
    cout << "a - b = " <<  sub(a, b) << endl;
    int (*func)(int, int) = add;
    cout << "a + b = " << func(a, b) << endl;
    return 0;
}
