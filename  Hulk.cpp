#include<iostream>
#include<string>
using namespace std;

int main()
{ int n; cin>>n;
    string a="I hate that";
    string b="I love that";
    for(int i=1; i<n; i++){
    if(i%2==1){cout<<a<<" ";}
    else cout<<b<<" ";
    }
    if(n%2==1) cout<<"I hate it";
    else cout<<"I love it";
    return 0;
}