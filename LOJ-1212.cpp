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
        ll n,m;
        cin>>n>>m;
        deque<ll>dq;
        string s;
        ll x;
        ll i=0;
        cout<<"Case "<<c<<":"<<endl;
        while(m--)
        {
            cin>>s;
            if(s=="pushRight")
            {
                cin>>x;
                if(i<n)
                {
                    i++;
                    dq.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            if(s=="pushLeft")
            {
                cin>>x;
                if(i<n)
                {
                    i++;
                    dq.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            if(s=="popRight")
            {
                if(i>0)
                {
                    i--;
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
            if(s=="popLeft")
            {
                if(i>0)
                {
                    i--;
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }



        }
    }

}
