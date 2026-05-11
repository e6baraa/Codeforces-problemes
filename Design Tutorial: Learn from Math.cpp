#include <iostream>
using namespace std;

int main()
{
    long i = 4, n, t = 0, d = 0;
    cin >> n;
    for (i = 4; i < n; i++) {
        t = 0, d = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                t++;
                if (t == 1) break;
            }
        }

        for (int j = 2; j < (n - i); j++) {
            if ((n - i) % j == 0) {
                d++;
                if (d == 1) break;
            }
        }
        if (t == 1 && d == 1) {
            break;
        }
    }
    cout << i << " " << n - i;
    return 0;
}
