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
       ll n,m;cin>>n;
       if(n%2==0)
       {
           m=2;
           n/=m;
           while(n%2==0)
           {
               n/=2;
               m*=2;
           }
           cout<<"Case "<<c<<": "<<n<<" "<<m<<endl;
       }
       else
         cout<<"Case "<<c<<": Impossible"<<endl;
    }
}

