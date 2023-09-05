
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
    ll i,j;
    ll ev,mx,od,a,n,t,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=0;
        od=0;
        ev=0;
        ans=0;
        v.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            if(i>0 && i<n-1)
            {
                if(a%2==0)
                {
                    ev++;
                }
                else
                {
                    od++;
                    mx=max(a,mx);
                }
            }

        }

        if(ev==0)
        {
            if(od==1)
                cout<<-1<<endl;
            else if(mx==1)
                cout<<-1<<endl;
            else
            {
                for(i=1; i<n-1; i++)
                {
                    b=v[i]/2;
                    if(v[i]%2==1)
                        b++;
                    ans+=b;

                }
                cout<<ans<<endl;
            }
        }
        else
        {
            for(i=1; i<n-1; i++)
            {
                b=v[i]/2;
                if(v[i]%2==1)
                    b++;
                ans+=b;
            }
            cout<<ans<<endl;
        }
    }

    return 0;

}

