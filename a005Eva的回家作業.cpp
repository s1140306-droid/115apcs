#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cin >> a >> b >> c >> d;

    // 等差數列
    if (b - a == c - b && c - b == d - c) {
        e = d + (d - c);
    }
    // 等比數列
    else {
        e = d * (d / c);
    }

    cout << a << " " << b << " " << c << " " << d << " " << e << endl;

    return 0;
}
