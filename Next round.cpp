#include <iostream>
using namespace std;

int main()
{
    int n, k, t, res = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == k - 1) {
            t = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if ((a[i] >= t) && (a[i] > 0)) {
            res++;
        }
    }
    cout << res;
    return 0;
}
