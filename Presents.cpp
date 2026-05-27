#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n],b[n],c[n];
    for(int i=0; i<n; i++){
    cin>>a[i];
    b[i]=a[i];
    c[i]=i+1;
    }
    for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
    if(b[j]>b[j+1]){swap(b[j],b[j+1]); swap(c[j],c[j+1]);}
    }
    }
    for(int i=0; i<n; i++){
   cout<<c[i]<<" ";
    }
    
    return 0;
}