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
        ll n;
        cin>>n;
        ll arr[n+1][4];
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=3; j++)
                cin>>arr[i][j];
        }


        ll dp[n+1][4];
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=3; j++)
                dp[i][j]=INT_MAX;
        }
        for(ll i=1; i<=3; i++)
            dp[1][i]=arr[1][i];
        for (ll i = 2; i <= n; i++)
        {
            for (ll j = 1; j <= 3; j++)
            {
                for (ll k = 1; k <= 3; k++)
                {
                    if(j!=k)
                        dp[i][j] = min(dp[i][j], arr[i][j] + dp[i - 1][k]);
                }
            }
        }
        ll ans=INT_MAX;
        for(ll i=1; i<4; i++)
            ans=min(dp[n][i],ans);
        cout<<"Case "<<c<<": "<<ans<<endl;
    }
}
