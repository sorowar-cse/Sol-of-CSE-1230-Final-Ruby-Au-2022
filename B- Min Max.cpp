#include<bits/stdc++.h>
#define lld  long long int
using namespace std;

int main()
{

 
    lld n,i,j,k,minimun=1000000,maximum=-1000000;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>k;
            minimun = min(minimun,k);
            maximum = max(maximum,k);
        }
    }
    cout<<maximum<<" "<<minimun<<endl;


}
