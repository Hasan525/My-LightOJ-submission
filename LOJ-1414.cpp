#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
map<string,ll>mp;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    mp["January"]=1;mp["February"]=2;mp["March"]=3;mp["April"]=4;mp["May"]=5;
    mp["June"]=6;mp["July"]=7;mp["August"]=8;mp["September"]=9;
    mp["October"]=10;mp["November"]=11;mp["December"]=12;
    tc
    {
       string S_month,S_coma;ll S_day,S_year;cin>>S_month>>S_day>>S_coma>>S_year;
       string E_month,E_coma;ll E_day,E_year;cin>>E_month>>E_day>>E_coma>>E_year;
       if(mp[S_month]>mp["February"])
            S_year++;
       if(mp[E_month]<mp["February"] ||(mp[E_month]==mp["February"] && E_day<29))
            E_year--;
        ll ans=((E_year/4)-((S_year-1)/4));
        ans-=((E_year/100)-((S_year-1)/100));
        ans+=((E_year/400)-((S_year-1)/400));
        cout<<"Case "<<c<<": "<<ans<<endl;


    }
}
