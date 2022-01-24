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
        ll n;cin>>n;
        string s;cin>>s;
        cout<<"Case "<<c<<": ";
        if(s=="Alice")
        {
            if(n%3!=1)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
        else
        {
            if(n%3!=1)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
    }




}
