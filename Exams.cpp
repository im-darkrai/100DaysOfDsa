#include <bits/stdc++.h>
using namespace std;

void Exam() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        int total_students = X * Y;

        if (Z * 2 > total_students) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    Exam();
    return 0;
}
