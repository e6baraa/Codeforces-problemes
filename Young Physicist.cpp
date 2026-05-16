#include<iostream>
using namespace std;

int main()
{
    int n,res=0,j=0;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++) {
        for( j=0; j<3; j++) {
            cin>>a[i][j];
        }
    }

    for( j=0; j<3; j++) {
        for(int i=0; i<n; i++) {
            res+=a[i][j];
        }
        if(res!=0) {
            cout<<"NO";
            break;
        }
    }
    if(j==3) {
        cout<<"YES";
    }





    return 0;
}