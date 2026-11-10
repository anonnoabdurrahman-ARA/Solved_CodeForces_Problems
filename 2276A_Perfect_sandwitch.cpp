#include<iostream>
using namespace std;
int main() {
    int x, a, b, d;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> a >> b;
        if (a <= b) {
            cout << "-1" << endl;
        }
        else {
            d = a - b;

            if (d < b) {
                cout << d << endl;
            }
            else {
                cout << b << endl;
            }
        }
    }

    return 0;
}