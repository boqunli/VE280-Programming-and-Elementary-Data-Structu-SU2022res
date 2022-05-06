#include <iostream>

using namespace std;

/*
1                                                                                                                       1    
2           ->  2           ->              ->      1       ->      1       ->              ->          2   ->          2
3   0   0       3   0   1       3   2   1       3   2   0       0   2   3       1   2   3       1   0   3       0   0   3
*/

void hanoi(char A, char B, char C, int n) {
    if (n == 1) {
        cout << n << " from " << A << " to " << C << endl;
        return;
    }
    hanoi(A, C, B, n - 1);
    cout << n << " from " << A << " to " << C << endl;
    hanoi(B, A, C, n - 1);
}

int main(int argc, char const *argv[])
{
    hanoi('A', 'B', 'C', 3);
    // 1 from A to C
    // 2 from A to B
    // 1 from C to B
    // 3 from A to C
    // 1 from B to A
    // 2 from B to C
    // 1 from A to C
    return 0;
}
