#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

   tc
   {
        ll n,k;cin>>n>>k;
    ll m=k;
    m%=n;
    ll ans=1;
    while(m)
    {
        m*=10;
        m+=k;
        m%=n;
        ans++;
    }
    cout<<"Case "<<c<<": "<<ans<<endl;
   }

}

