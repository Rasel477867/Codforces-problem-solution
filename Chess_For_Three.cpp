
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define pf push_front
const ll mod=1e9+7;
using namespace std;
vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll n,a,b,c,mx,mn,y;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    y=0;
    a=1;
    b=2;
    for(i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            mn=min(a,b);
            mx=max(a,b);
            if(mn==1)
            {
                if(mx==2)
                    mx=3;
                else
                    mx=2;
            }
            else
            {
                y=1;
                break;
            }
            a=mx;
            b=mn;
        }
        else if(v[i]==2)
        {
            if(a==2)
            {
                if(b==1)
                    b=3;
                else
                    b=1;
            }
            else if(b==2)
            {
                if(a==3)
                    a=1;
                else
                    a=3;
            }
            else{
                y=1;
                break;
            }
        }
        else{
            mx=max(a,b);
            mn=min(a,b);
            if(mx==3)
            {
                if(mn==2)
                    mn=1;
                else
                    mn=2;
            }
            else{
                y=1;
                break;
            }
            a=mn;
            b=mx;
        }
    }
    if(y==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


return 0;

}
