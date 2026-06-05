#include<iostream>
#include<string>
using namespace std;

int main()
{   int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.length()<26) {
        cout<<"NO";
        return 0;
    }
    else {
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='a'||s[i]=='A')
                for(int i=0; i<s.length(); i++) {
                    if(s[i]=='b'||s[i]=='B') {
                        for(int i=0; i<s.length(); i++) {
                            if(s[i]=='c'||s[i]=='C') {
                                for(int i=0; i<s.length(); i++) {
                                    if(s[i]=='d'||s[i]=='D') {
                                        for(int i=0; i<s.length(); i++) {
                                            if(s[i]=='e'||s[i]=='E') {
                                                for(int i=0; i<s.length(); i++) {
                                                    if(s[i]=='f'||s[i]=='F') {
                                                        for(int i=0; i<s.length(); i++) {
                                                            if(s[i]=='g'||s[i]=='G') {
                                                                for(int i=0; i<s.length(); i++) {
                                                                    if(s[i]=='h'||s[i]=='H') {
                                                                        for(int i=0; i<s.length(); i++) {
                                                                            if(s[i]=='i'||s[i]=='I') {
                                                                                for(int i=0; i<s.length(); i++) {
                                                                                    if(s[i]=='j'||s[i]=='J') {
                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                            if(s[i]=='k'||s[i]=='K') {
                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                    if(s[i]=='l'||s[i]=='L') {
                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                            if(s[i]=='m'||s[i]=='M') {
                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                    if(s[i]=='n'||s[i]=='N') {
                                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                                            if(s[i]=='o'||s[i]=='O') {
                                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                                    if(s[i]=='p'||s[i]=='P') {
                                                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                                                            if(s[i]=='q'||s[i]=='Q') {
                                                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                                                    if(s[i]=='r'||s[i]=='R') {
                                                                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                                                                            if(s[i]=='s'||s[i]=='S') {
                                                                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                                                                    if(s[i]=='t'||s[i]=='T') {
                                                                                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                                                                                            if(s[i]=='u'||s[i]=='U') {
                                                                                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                                                                                    if(s[i]=='v'||s[i]=='V') {
                                                                                                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                                                                                                            if(s[i]=='w'||s[i]=='W') {
                                                                                                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                                                                                                    if(s[i]=='x'||s[i]=='X') {
                                                                                                                                                                                                        for(int i=0; i<s.length(); i++) {
                                                                                                                                                                                                            if(s[i]=='y'||s[i]=='Y') {
                                                                                                                                                                                                                for(int i=0; i<s.length(); i++) {
                                                                                                                                                                                                                    if(s[i]=='z'||s[i]=='Z') {
                                                                                                                                                                                                                        cout<<"YES";
                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    else if(i==s.length()-1) {
                                                                                                                                                                                                                        cout<<"NO";
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
        }
    }
    cout<<"NO";
    return 0;
}
