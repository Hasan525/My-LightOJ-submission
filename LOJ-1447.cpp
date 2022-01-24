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
       ll n;cin>>n;
       ll arr[n+2];
       for(ll i=0;i<n;i++)
            cin>>arr[i];
       ll sum=0;
       map<ll,ll>mp;
       for(ll i=n-1;i>=0;i--)
       {
           ll x=abs(arr[i]);
           if(mp[x]==0)
           {
               sum+=arr[i];
               mp[x]++;
           }
       }
       cout<<"Case "<<c<<": ";
       cout<<sum<<endl;
    }
}
