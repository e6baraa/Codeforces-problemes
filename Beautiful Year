#include<iostream>
using namespace std;

int main()
{
    int t,n,i=0,u=0;
    cin>>n;
    int p=0;
    bool r=1;
    int a[10];

    do {
        i=0,u=0,p=0;
        n=n+1;
        t=n;
        while(t!=0) {
            a[i]=t%10;
            t=t/10;
            i++;
            u++;
        }
        for(int i=0; i<u; i++) {
            for(int j=0; j<u-1; j++) {
                if(a[i]==a[j]) p++;
            }
        }
        if(p==3) {
            cout<<n;
            r=0;
        }
    } while(r==1);
    return 0;
}