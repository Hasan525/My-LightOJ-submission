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
        string s,st;cin>>s>>st;
        ll n=s.size();
        ll m=st.size();
        ll dp[m+1];
        dp[0]=0;
        ll len=0;
        ll i=1,j=0,ans=0;
        while(i<m)
        {
           if(st[i]==st[len])
           {
              len++;
              dp[i]=len;
              i++;
           }
           else
           {
               if(len)
               {
                   len=dp[len-1];
               }
               else
               {
                   dp[i]=len;
                   i++;
               }
           }
        }
        i=0;
        while(i<n)
        {
            if(s[i]==st[j])
            {
                i++;
                j++;
            }
            else if(j)
            {
              j=dp[j-1];
            }
            else
            {
                i++;
            }
            if(j==m)
            {
                j=dp[j-1];
                ans++;
            }

        }
        cout<<"Case "<<c<<": ";
        cout<<ans<<endl;
    }
}
