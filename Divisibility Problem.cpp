#include<iostream>
using namespace std;

int rr(int x, int y) {
    int t;
    t=((x-x%y)+y)-x;

    return t;
}

int main()
{

    int n;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        if(a[i][0]%a[i][1]==0) {
            cout<<0<<endl;
        }
        else cout<<rr(a[i][0],a[i][1])<<endl;
    }
    return 0;
}