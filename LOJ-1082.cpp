#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)

ll arr[100005];
ll tree[400005];
ll cnt,res;
ll segment_tree(ll i, ll j, ll node)
{


	if(i == j) {
		tree[node] = arr[i];
		return arr[i];
	}
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(i+j)/2;
	segment_tree(i,mid,left);
    segment_tree(mid+ 1, j,right);

	tree[node] = min(tree[right], tree[left]);
	return tree[node];

}

ll query(ll i, ll j, ll x, ll y, ll node)
{
	if(x <= i and y >= j) {
		return tree[node];
	}

	if(x > j or y < i) {
		return INT_MAX;
	}
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(i+j)/2;
	return min ((query(i, mid, x, y,left)),(query(mid + 1, j, x, y,right)));

}


int main()
{

   tc
   {
       ll n,q;cin>>n>>q;
       for(ll i=1;i<=n;i++)
        cin>>arr[i];
       segment_tree(1,n,1);
       ll a,b;
       cout<<"Case "<<c<<":"<<endl;
       while(q--)
       {
           cin>>a>>b;
           ll ans=query(1,n,a,b,1);
           cout<<ans<<endl;

       }
   }
}
