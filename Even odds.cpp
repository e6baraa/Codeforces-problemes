#include <iostream>
using namespace std;

int main()
{
    long long n, k, res = 0;
    cin >> n >> k;

    if (n % 2 == 1) {
        if (k <= ((n + 1) / 2)) {
            cout << k * 2 - 1;
        }
        else if (k > ((n + 1) / 2)) {
            k = k - (n + 1) / 2;
            cout << k * 2;
        }
    }
    else if (n % 2 == 0) {
        if (k <= (n / 2)) {
            cout << k * 2 - 1;
        }
        else if (k > (n / 2)) {
            k = k - n / 2;
            cout << k * 2;
        }
    }

    return 0;
}
