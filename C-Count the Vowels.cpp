#include<bits/stdc++.h>
#define lld  long long int
using namespace std;

int main()
{

 
    lld n,i,j,k;
    string s1;
    while(getline(cin,s1)){
        lld count=0;
        if(s1.size()==1 && s1[0]=='*')break;
        else {
            for(i=0;i<s1.size();i++){
                if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U' || s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')count++;
            }
            cout<<count<<endl;
        }
    }



}
