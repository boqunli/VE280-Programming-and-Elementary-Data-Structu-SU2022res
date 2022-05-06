#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream ifs;
    ofstream ofs;
    ifs.open("./io.cpp");
    if (!ifs.is_open()) {
        // error
        cout << "error opening the file: io.cpp" << endl;
    }
    string first_line;
    getline(ifs, first_line);
    ifs.close();    
    ofs.open("./result");
    ofs << first_line << endl;
    ofs.close();
    return 0;
}
