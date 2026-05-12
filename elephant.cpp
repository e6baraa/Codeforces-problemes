#include<iostream>
using namespace std;

int main()
{
    int n,t,a,b,c,d;
    cin>>n;
    t=n%5;
    if(t==0) {
        cout<<n/5;
    }
    else if(t%4==0) {
            cout<<n/5+1;
        }
        else if(t%3==0) {
            cout<<n/5+1;
        }
        else if(t%2==0) {
            cout<<n/5+1;
        }
        else if(t%1==0) {
            cout<<n/5+1;
        }
    return 0;
}