
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
deque<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll n,a,b,c,mx,mn,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        v.clear();
        v.pb(a);
        for(i=1; i<n; i++)
        {
            cin>>a;
            if(v.front()>a)
                v.pf(a);
            else
                v.pb(a);
        }
        for(i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }


return 0;

}
