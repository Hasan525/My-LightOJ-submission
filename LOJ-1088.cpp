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
        ll n, q;cin>>n>>q;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll x,y;
        cout<<"Case "<<c<<": "<<endl;
        while(q--)
        {
          cin>>x>>y;
          ll cnt=lower_bound(arr,arr+n,x)-arr;
          ll res=upper_bound(arr,arr+n,y)-arr;
          cout<<res-cnt<<endl;
        }
    }
}
