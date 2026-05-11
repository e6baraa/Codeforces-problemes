#include <iostream>
using namespace std;

int main()
{
    long long n, j = 0, m = 0;
    cin >> n;
    long long res[n], a[n], b[n];

    for (long long i = 1; i <= n; i++) {
        if (n % i == 0) {
            a[j] = i;
            b[j] = n / i;
            res[j] = b[j] - a[j];
            j++;
            m++;
        }
    }

    long long minn = res[0];
    for (long long j = 0; j < m; j++) {
        if (minn > res[j] && res[j] >= 0) {
            minn = res[j];
        }
    }

    for (long long j = 0; j < m; j++) {
        if (res[j] == minn) {
            cout << a[j] << " " << b[j];
        }
    }

    return 0;
}
