#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string c="";
    if(s.length()==1) {cout<<s;}
    else{
    for(int i=0; i<s.length(); i++){
    
    if (s[i]!='+'){c+=s[i];}
    }
    for(int i=0; i<c.length()-1;i++){
    for(int j=0; j<c.length()-1; j++){
    if(c[j]>c[j+1]){swap(c[j],c[j+1]);}
    }}
    }
    
  for(int i=0; i<c.length(); i++){
   cout<<c[i];
   if(i!=c.length()-1){cout<<"+";}
   
   }
    
    
    return 0;
}
