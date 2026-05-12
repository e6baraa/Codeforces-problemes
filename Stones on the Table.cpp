#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n,res=0;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    for(int i=0; i<s.length()-1; i++) {
        if(s[i]==s[i+1]) {
            res++;
        }
    }
    cout<<res;

    return 0;
}