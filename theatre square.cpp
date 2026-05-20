#include <iostream>
using namespace std;

int main()
{
    long long n, m, a, resn = 0, resm = 0;
    cin >> n >> m >> a;

    resn = n / a;
    if (n % a > 0) {
        resn++;
    }

    resm = m / a;
    if (m % a > 0) {
        resm++;
    }

    cout << resn * resm;
    return 0;
}