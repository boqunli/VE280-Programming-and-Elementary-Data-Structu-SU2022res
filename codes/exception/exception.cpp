#include <iostream>
#include <cassert>

using namespace std;

void foo() {
    throw "err in foo!";
}

void baz() {
    foo();
}

int main(int argc, char const *argv[])
{
    try {
        baz();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    catch(const string& e) {
        cerr << e << endl;
    }
    catch(const char* e) {
        cerr << e << endl;
    }
    cout << "program continues after exception." << endl;
    return 0;
}

