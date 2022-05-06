#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {

    bool help = false, verbose = false, list = false;

    if (argc <= 1) {
        cout << "normal mode!" << endl;
    } else if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--verbose") == 0) {
                cout << "verbose mode!" << endl;
            }
            if (strcmp(argv[i], "-l") == 0 || strcmp(argv[i], "--list") == 0) {
                cout << "function list: -v / -l / -h" << endl;
            }
            if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
                cout << "this is the demo for main function argument." << endl;
            }
        }
    }
    return 0;
}
