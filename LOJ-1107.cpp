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
       ll x,y,x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
       ll q;cin>>q;
       cout<<"Case "<<c<<":"<<endl;
       while(q--)
       {
          cin>>x>>y;
          if(x>=x1 && x<=x2 && y>=y1 && y<=y2)
            cout<<"Yes"<<endl;
          else
          cout<<"No"<<endl;

       }
    }
}
