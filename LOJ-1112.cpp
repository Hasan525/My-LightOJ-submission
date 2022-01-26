#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const int mx=100005;
int arr[mx],tree[mx*3+3];

void segment_tree(int i, int j, int node)
{
    if(i==j)
    {
        tree[node]=arr[i];
        return;
    }
    segment_tree(i,(i+j)/2,node*2);
    segment_tree(((i+j)/2)+1,j,(node*2)+1);
    tree[node]=tree[node*2]+tree[(node*2)+1];
}

void segment_tree_update(int i,int j,int y,int node)
{
    if(i>y || j<y)
        return;
    if(i==j && y==i)
    {
        tree[node]=arr[y];
        return;
    }
    segment_tree_update(i,(i+j)/2,y,node*2);
    segment_tree_update(((i+j)/2)+1,j,y,(node*2)+1);
    tree[node]=tree[node*2]+tree[(node*2)+1];
}


int segment_tree_query(int i, int j, int y, int z, int node)
{
    if(y>j or i>z)
    {
       return 0;
    }
    if(i>=y && j<=z)
    {
       return tree[node];
    }
    int cnt=segment_tree_query (i,(i+j)/2,y,z,node*2);
    int res=segment_tree_query (((i+j)/2)+1,j,y,z,(node*2)+1);
    return cnt+res;
}

int main()
{
    tc
    {

        int n,q;
        scanf("%d %d",&n,&q);
        for(ll i=0; i<n; i++) scanf("%d",&arr[i]);
        segment_tree(0,n-1,1);
        /*for(ll i=1;i<=5;i++)
            cout<<tree[i]<<" ";
        cout<<endl;*/
        printf("Case %d: \n",c);
        while(q--)
        {
            int x,y,z;
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%d",&y);
                printf("%d\n",arr[y]);
                arr[y]=0;
                segment_tree_update(0,n-1,y,1);
            }

            else if(x==2)
            {
                scanf("%d %d",&y,&z);
                arr[y]+=z;
                segment_tree_update(0,n-1,y,1);
            }

            else
            {
                scanf("%d %d",&y,&z);
                int ans=segment_tree_query(0,n-1,y,z,1);
                printf("%d\n",ans);

            }
        }

    }
    return 0;
}
