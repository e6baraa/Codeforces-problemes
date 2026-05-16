#include<iostream>
#include<string>
using namespace std;


bool small(char c) {
    if(c>='a'&&c<='z') {
        return 1;
    }
    else {
        return 0;
    }
}

bool capital(char c) {
    if(c>='A'&&c<='Z') {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{   string s;
    int ss=0, cc=0;
    cin>>s;
    for(int i=0; i<s.length(); i++) {
        if(small(s[i])==1) {
            ss++;
        }
        else {
            cc++;
        }
    }
    if(ss>=cc) {
        for(int i=0; i<s.length(); i++) {
            if(capital(s[i])==1) {
                s[i]=s[i]+32;
            }
        }
    }

    else if(ss<cc) {
        for(int i=0; i<s.length(); i++) {
            if(small(s[i])==1) {
                s[i]=s[i]-32;
            }
        }
    }
    cout<<s;
    return 0;
}