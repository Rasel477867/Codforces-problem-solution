
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,m,a,b,ans,k,mn,mx,c,mid;
    cin>>t;
    while(t--)
    {


    c=-1;
    cin>>n>>k;
    ans=0;
    cin>>a;
    mn=a;
    mx=a;
    for(i=1; i<n; i++)
    {
        cin>>a;
        mx=max(a,mx);
        mn=min(a,mn);
        mid=(mx+mn)/2;
        b=abs(mid-mn);
        c=abs(mx-mid);
        b=max(b,c);
        if(b>k)
        {
            if(c==-1)
                {
                    c=1;
                    mx=a;
                    mn=a;
                }
            else{
                ans++;
                mx=a;
                mn=a;

            }
        }
    }
    cout<<ans<<endl;
    }



    return 0;

}


