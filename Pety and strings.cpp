#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    string s, c;
    cin >> s >> c;
    int n = min(s.size(), c.size());
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
        c[i] = tolower(c[i]);
    }
    for (i = 0; i < n; i++) {
        if (s[i] == c[i]) {
            continue;
        } else if (s[i] > c[i]) {
            cout << 1;
            break;
        } else if (s[i] < c[i]) {
            cout << -1;
            break;
        }
    }
    if (i == n) {
        cout << 0;
    }

    return 0;
}
