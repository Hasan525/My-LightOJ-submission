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
        ll n,col,row;
        cin>>n;
        ll cnt=sqrt(n);
        if(cnt*cnt<n)
            cnt++;
        cout<<"Case "<<c<<": ";
        if(cnt%2==0)
        {
            col=cnt;
            ll res=cnt*cnt;
            if(res-n<=cnt-1)
                row=res-n+1;
            else
            {
                res-=(cnt-1);
                row=cnt-(res-n);
                swap(row,col);
            }
            cout<<col<<" "<<row<<endl;
        }
        else
        {
            row=cnt;
            ll res=cnt*cnt;
            if(res-n<=row-1)
                col=res-n+1;
            else
            {
                res-=(cnt-1);
                col=cnt-(res-n);
                swap(row,col);
            }
            cout<<col<<" "<<row<<endl;
        }




    }
}
