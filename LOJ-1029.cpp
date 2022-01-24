#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)



ll prims(ll s,ll flag,vector<pair<ll,ll> >adj[])
{
    priority_queue<pair<ll,ll>, vector<pair<ll,ll> >,greater<pair<ll,ll> > >pq;
    bool mark[105]= {false};
    ll ans=0;
    pq.push(make_pair(flag*0,s));
    while(!pq.empty())
    {
        ll g=pq.top().first;
        ll f=pq.top().second;
        pq.pop();
        //cout<<g<<f<<endl;
        if(mark[f])
            continue;
        ans+=(flag*g);
        mark[f]=true;
        for(ll i=0; i<adj[f].size(); i++)
        {
            if(!mark[adj[f][i].second])
                pq.push(make_pair(adj[f][i].first*flag,adj[f][i].second));
        }
    }
    return ans;


}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();



    tc
    {
        ll n,a,b,w;
        cin>>n;
        vector<pair<ll,ll> >adj[105];
        while(1)
        {
            cin>>a>>b>>w;
            if(a==0 && b==0 && w==0)
                break;
            adj[a].push_back(make_pair(w,b));
            adj[b].push_back(make_pair(w,a));
        }
        ll mi=prims(0,1,adj);
        ll mx=prims(0,-1,adj);
        //cout<<mi<<" "<<mx<<endl;
        cout<<"Case "<<c<<": ";
        if((mi+mx)%2)
            cout<<mi+mx<<'/'<<2<<endl;
        else
            cout<<(mi+mx)/2<<endl;

    }


}
