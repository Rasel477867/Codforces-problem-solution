
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
vector<ll>v1;
map<string,ll>m;
map<string,ll>:: iterator it;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll n,k,p,a,mn=0,mx=0,c;
    cin>>n>>k;
    p=k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    while(k--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(it=m.begin(); it!=m.end(); it++)
    {
        v1.pb(it->second);
    }
    sort(v1.begin(),v1.end());
    c=0;
    reverse(v1.begin(),v1.end());

    for(i=0; i<n; i++)
    {
        if(c==p)
            break;
        c+=v1[i];
        mn+=v[i]*v1[i];
        if(c==p)
            break;
    }
    reverse(v.begin(),v.end());
    c=0;
    for(i=0; i<n; i++)
    {
        if(c==p)
            break;
        c+=v1[i];
        mx+=v[i]*v1[i];
        if(c==p)
            break;
    }

   cout<<mn<<" "<<mx;

return 0;

}
