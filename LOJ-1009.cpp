#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
map<ll,ll>mp,vis;


ll bfs(ll x,vector<ll> v[])
{
    ll res=0,cnt=0;
    queue<ll>q;
    mp[x]=1;
    vis[x]=1;
    q.push(x);
    cnt++;
    while(!q.empty())
    {
        ll y=q.front();
        q.pop();
        for(ll i=0; i<v[y].size(); i++)
        {
            if(vis[v[y][i]]==0)
            {
                vis[v[y][i]]=1;
                q.push(v[y][i]);
                if(mp[y]==1)
                {
                    mp[v[y][i]]=2;
                    res++;
                }
                else
                {
                    mp[v[y][i]]=1;
                    cnt++;
                }
            }
        }
    }
    ll ma=max(cnt,res);
    return ma;

}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        ll n;
        cin>>n;
        vector<ll> v[20001];
        ll x,y;
        while(n--)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        ll ans=0;
        for(ll i=1; i<20001; i++)
        {
            if(vis[i]==0 && v[i].size())
                ans+=bfs(i,v);
        }
        cout<<"Case "<<c<<": ";
        cout<<ans<<endl;
        mp.clear();
        vis.clear();

    }
}
