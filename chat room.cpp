#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int m=0;
    cin>>s;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='h') {
            for(int j=i+1; j<s.length(); j++) {
                if(s[j]=='e') {
                    for(int k=j+1; k<s.length(); k++) {
                        if(s[k]=='l') {
                            for(int l=k+1; l<s.length(); l++) {
                                if(s[l]=='l') {
                                    for( m=l+1; m<s.length(); m++) {
                                        if(s[m]=='o') {
                                            cout<<"YES";
                                            return 0;
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}