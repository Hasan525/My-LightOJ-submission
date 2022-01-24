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
        ll n,m,x,y;cin>>n>>m;
        vector<pair<ll,ll> >v;
        while(n--)
        {
            cin>>x>>y;
            v.push_back(make_pair(y,x));
        }
        sort(v.begin(),v.end());
        ll cnt=1,sum=v[0].first+m;
        for(ll i=0;i<v.size();i++)
        {
           if(sum<v[i].first)
           {
               sum=v[i].first+m;
               cnt++;
           }
        }
        cout<<"Case "<<c<<": "<<cnt<<endl;

    }
}
