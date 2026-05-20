#include<iostream>
using namespace std;

int main()
{
    int res=0,maxx=0,n; cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
    cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++){
    res+=b[i]-a[i];
    if(res>maxx){maxx=res;}
    }
    cout<<maxx;
    return 0;
}