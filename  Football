#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i,j,res=0;
    cin>>s;
    for( i=0; i<s.length(); i++) {
        for( j=i; j<s.length(); j++) {
            if(s[j]==s[j+1]) {
                res++;
            }
            else {
                if(res>=6) {
                    break;
                }
                else {
                    res=0;
                    break;
                }
            }
        }
        if(res>=6) {
            cout<<"YES";
            break;
        }
    }
    if(i==s.length()) {
        cout<<"NO";
    }
    return 0;
}