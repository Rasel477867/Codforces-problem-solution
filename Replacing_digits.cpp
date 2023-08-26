
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
vector<ll>v1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,ans,a,m;
    string s,s1;
    cin>>s1>>s;
    n=s1.size();
    m=s.size();
    for(i=0; i<n; i++)
    {
        a=s1[i]-48;
        v.pb(a);
    }
    for(i=0; i<m; i++)
    {
        a=s[i]-48;
        v1.pb(a);
    }
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    ll p=0;
    for(i=0; i<v.size(); i++)
    {
        if(p==m)
            break;
        if(v[i]<v1[p])
        {
            v[i]=v1[p];
            p++;
        }
    }
    for(i=0; i<v.size(); i++)
        cout<<v[i];


    return 0;

}

