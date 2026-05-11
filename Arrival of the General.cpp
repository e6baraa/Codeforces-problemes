#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n], re = 0, res = 0, maxx = A[0], minn = A[1];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    // إيجاد القيم العظمى والصغرى الابتدائية
    maxx = A[0];
    minn = A[0];
    for (int i = 0; i < n; i++) {
        if (A[i] > maxx) {
            maxx = A[i];
        }
        if (A[i] <= minn) {
            minn = A[i];
        }
    }

    // نقل الطويل للأمام
    for (int i = 0; i < n; i++) {
        if (A[i] == maxx) {
            for (int j = i; j >= 1; j--) {
                swap(A[j], A[j - 1]);
                res++;
            }
            break;
        }
    }

    // نقل القصير للخلف
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == minn) {
            for (int j = i; j < n - 1; j++) {
                swap(A[j], A[j + 1]);
                res++;
            }
            break;
        }
    }

    cout << res;

    return 0;
}
