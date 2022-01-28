#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
ll dx[]={0,0,-1,+1};
ll dy[]={-1,+1,0,0};
const ll mx=25;
string s[mx];
ll cnt=0,m,n;

ll dfs(ll i,ll j)
{
    cnt++;
    s[i][j]='#';
    for(ll k=0;k<4;k++)
    {
        ll x=dx[k]+i;
        ll y=dy[k]+j;
        if(x>=0 && x<n && y>=0 && y<m && s[x][y]=='.')
            dfs(x,y);
    }
   return cnt;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        cin>>m>>n;
        for(ll i=0;i<n;i++)
            cin>>s[i];
        cout<<"Case "<<c<<": ";
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cnt=0;
                if(s[i][j]=='@')
                {
                    cout<<dfs(i,j)<<endl;
                    break;
                }
            }
        }
    }
}
