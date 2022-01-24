#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
#define mx 5000000
ll arr[mx+2];
ull brr[mx+2];

void Euler_function(){
    for(ll i=2; i<=mx; i++)
        arr[i] = i;
    for(ll i =2; i<=mx; i++)
        if(arr[i]==i)
            for(ll j=i; j<=mx; j+=i)
                arr[j]-=arr[j]/i;
}

int main(){

    Euler_function();
    brr[1] = 0;

    for(ll i=2; i<=mx; i++)
        brr[i]= ((ull)arr[i]* (ull)arr[i])+brr[i-1];

    tc
    {
        ll a,b;
        scanf("%d%d",&a,&b);
        ull ans= brr[b]-brr[a-1];
        printf("Case %d: %llu\n",c,ans);
    }
    return 0;
}
