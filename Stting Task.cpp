#include<iostream>
#include<string>
using namespace std;

bool isupper (char c){
if(c>='A'&&c<='Z'){return 1;}
else {return 0;}
}
bool isvowel (char c){
if(c=='a'||c=='A'||c=='y'||c=='Y'||
c=='e'||c=='E'||c=='i'||c=='I'||
c=='o'||c=='O'||c=='u'||c=='U')
{return 1;}
else {return 0;}
}


int main()
{ string s,c="";
getline(cin,s);

    for(int i=0; i<s.length(); i++){
    if(isupper (s[i])==1){s[i]=s[i]+32;}
    if(isvowel(s[i])==1){continue;}
    cout<<"."<<s[i];
    }
   
    
    return 0;
}