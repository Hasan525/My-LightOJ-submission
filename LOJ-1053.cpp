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
        ll arr[4];
        for(ll i=0; i<3; i++)
            cin>>arr[i];
        sort(arr,arr+3);
        cout<<"Case "<<c<<": ";
        if((arr[0]*arr[0])+(arr[1]*arr[1])==(arr[2]*arr[2]))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}
