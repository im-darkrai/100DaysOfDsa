#include<iostream>
using namespace std;

void pattern0(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern1(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for (int i = 0; i < n; i++) {           
        for (int j = 0; j < n - i; j++) {   
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // call your pattern functions here.
    pattern2(n);
    return 0;
}