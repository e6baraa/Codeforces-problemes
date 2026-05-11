#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int A[n], B[n], res = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                res++;
            }
        }
    }
    cout << res;

    return 0;
}
