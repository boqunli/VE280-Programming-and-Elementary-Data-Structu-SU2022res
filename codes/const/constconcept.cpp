#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int max_size = 512;
    char name[max_size];
    // max_size = 128 ERROR
    const int iVal = 10;
    const int &rVal = iVal; 
    const int &ref = 10; // OK
    const int &ref = iVal + 10; // OK
    // int &ref = 10; // ERROR
    // int &ref = iVal+10; // ERRROR

    int v = 0;
    const int *pv = &v; // pointer to const
    int* const cpv = &v; // const pointer, can only point to v

    return 0;
}

void const_aug(const int& x) {
    // x++; // ERROR
}

void prt(const string &str) {
    cout << str << endl;
}

void test() {
    prt("hello"); // OK
}
