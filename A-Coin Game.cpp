#include<bits/stdc++.h>
#define lld  long long int
using namespace std;

int main()
{

    lld n,i,j,k,count1,count2;
    while(cin>>n && n!=0){
        count1=0;
        count2=0;
        for(i=1;i<=n;i++){
            cin>>k;
            if(k==0)count1++;
            else count2++;
        }

        cout<<"Mary won "<<count1<<" times and John won "<<count2<<" times"<<endl;

    }
}
