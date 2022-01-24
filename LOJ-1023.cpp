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

    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    tc
    {
        ll n,k;cin>>n>>k;
        cout<<"Case "<<c<<": "<<endl;
        string x=s.substr(0,n);
        do
        {
            cout<<x<<endl;
            k--;
        }while(k && next_permutation(x.begin(),x.end()));
    }
}
