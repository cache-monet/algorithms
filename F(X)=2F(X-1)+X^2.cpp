#include <iostream>

using namespace std;

int foo (int x) {
    while (x) {
        return 2 * foo(x-1) + x*x;
    }
    return 0;
}

int main() {
    int d, r;
    while(cin >> d) {
    r = foo(d);
    cout << r << endl;
    }
    return 0;
}