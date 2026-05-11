#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int t = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (s[i] != s[j]) {
                continue;
            }
            else {
                t++;
                break;
            }
        }
    }

    int re = s.length() - t;
    if (re % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
