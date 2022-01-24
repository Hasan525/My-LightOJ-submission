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
        string s;
        cin>>s;
        string st="https://";
        bool flag=false;
        for(ll i=0;i<s.size();i++)
        {
            if(flag)
                st+=s[i];
            if(s[i]=='/' && s[i-1]=='/')
                flag=true;

        }
        cout<<"Case "<<c<<": "<<st<<endl;

    }
}
