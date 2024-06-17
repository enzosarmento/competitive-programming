#include "template.h"

int main() { _;

    int l;

    while (cin >> l) {
        double ans = (2*sqrt(3)*pow(l, 2)) / 5;
        cout << fixed << setprecision(2) << ans << endl; 
    }

    return 0;
}