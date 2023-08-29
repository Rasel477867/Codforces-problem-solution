
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
map<ll,multiset<ll> >m;
map<ll,ll>m1;

multiset<ll>m3;
multiset<ll>:: iterator it;
vector<pair<ll,ll> >v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll a,b,d,c,ans,n,k;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        v.pb({a,b});
    }
    for(i=0; i<k; i++)
    {
        cin>>a>>b;
        m1[b]++;
        m[b].insert(a);
    }
    ans=0;
    d=0;
    for(i=0; i<n; i++)
    {
        a=v[i].first;
        b=v[i].second;
        if(m1[b]>0)
        {

            it=m[b].lower_bound(a);
            if(it==m[b].end())
                continue;
            if(*it==a)
            {
                ans++;
                m[b].erase(it);

            }
        }
    }
    for(i=0; i<n; i++)
    {
        a=v[i].first;
        b=v[i].second;
        if(m1[b]>0)
        {
            d++;
            m1[b]--;
        }
    }
    cout<<d<<" "<<ans;







    return 0;

}

