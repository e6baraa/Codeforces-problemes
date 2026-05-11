#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, t = 0;
    cin >> n;
    int k[n];
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    for (int i = 0; i < n; i++) {
        if (k[i] > 0) {
            a = a + k[i];
        } else {
            if (a > 0) {
                a = a - 1;
            } else if (a == 0) {
                t++;
            }
        }
    }
    cout << t;
    return 0;
}
