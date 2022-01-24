#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
ll graph[501][501];
ll dis[501];

void dijkstra(ll t, ll n)
{
    for(ll i=0; i<n; i++)
        dis[i]=INT_MAX;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >pq;
    dis[t]=0;
    pq.push(make_pair(0,t));
    while(!pq.empty())
    {
        ll x=pq.top().second;
        pq.pop();
        for(ll i=0; i<n; i++)
        {
            if(graph[x][i])
            {
                ll mx=max(graph[x][i],dis[x]);
                if(dis[i]>mx)
                {
                    dis[i]=mx;
                    pq.push(make_pair(dis[i],i));
                }
            }
        }
    }

}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
                graph[i][j]=0;
        }
        ll a,b,w;
        while(m--)
        {
            cin>>a>>b>>w;
            if(graph[a][b]!=0)
            {
                if(w<graph[a][b])
                {
                    graph[a][b]=w;
                    graph[b][a]=w;
                }
                continue;
            }
            graph[a][b]=w;
            graph[b][a]=w;

        }
        ll t;
        cin>>t;
        dijkstra(t,n);
        cout<<"Case "<<c<<":"<<endl;
        for(ll i=0; i<n; i++)
        {
            if(dis[i]!=INT_MAX)
            cout<<dis[i]<<endl;
            else
                cout<<"Impossible"<<endl;
        }
    }
}
