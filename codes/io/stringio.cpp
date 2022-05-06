#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string line;
    if (argc <= 2) {
        return 0;
    }    
    std::ostringstream oss;
    oss << argv[1] << " " << argv[2];
    line = oss.str();
    istringstream iss;
    iss.str(line);
    cout << line << endl;
    int a = 0, b = 0;
    iss >> a >> b;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
