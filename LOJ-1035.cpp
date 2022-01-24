#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)

vector<ll>v;
bool prime[105];

void sieve(ll n)
{
    memset(prime,true,sizeof(prime));
    for(ll i=2; i*i<=n; i++)
    {
        if(prime[i])
        {
            for(ll j=i*2; j<=n; j+=i)
                prime[j]=false;
        }
    }
    for(ll i=2; i<=n; i++)
        if(prime[i])
            v.push_back(i);
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    sieve(105);

    tc
    {
        map<ll,ll>mp;
        ll n,i=0;
        cin>>n;
        ll ans=n;

        while(n)
        {
            i=0;ll m=n;
            while(1)
            {
                if(m==0 || m<v[i])
                    break;
                else if(m%v[i]==0)
                {
                    mp[v[i]]++;
                    m/=v[i];
                }
                else
                    i++;
            }
            mp[m]++;
            n--;
        }

        cout<<"Case "<<c<<": "<<ans<<" = ";
        i=0;
        while(mp[v[i]]==0)
            i++;
        cout<<v[i]<<" ("<<mp[v[i]]<<")";
        i++;
        for( ; i<v.size(); i++)
        {
            if(mp[v[i]])
            {
                cout<<" * "<<v[i]<<" ("<<mp[v[i]]<<')';

            }
        }
        cout<<endl;

    }

}
