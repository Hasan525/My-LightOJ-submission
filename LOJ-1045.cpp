#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)




double arr[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    arr[0]=0;
    for(ll i=1; i<=1000000; i++)
        arr[i]=arr[i-1]+log(i);

    tc
    {
       ll n,b;cin>>n>>b;
       ll d=(arr[n]/log(b))+1;
       cout<<"Case "<<c<<": "<<d<<endl;
    }



}
