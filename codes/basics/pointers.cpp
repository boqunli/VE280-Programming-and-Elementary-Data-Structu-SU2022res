#include <iostream>

using namespace std;

void swap_value(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

void swap_pointer(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void swap_ref(int& x, int& y) {
    int t = x;
    x = y;
    y = t;
}

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;
    cout << "a = " << a << " b = " << b << endl;

    cout << "swap_value(a, b)" << endl;
    swap_value(a, b);
    cout << "a = " << a << " b = " << b << endl;

    cout << "swap_pointer(a, b)" << endl;
    swap_pointer(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    cout << "swap_ref(a, b)" << endl;
    swap_ref(a, b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
