
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
map<ll,ll>m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    string s;
    ll n;
    cin>>n>>s;
    if(s[0]=='0')
        cout<<1<<endl;
    else{
        ll ans=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
                ans++;
            else
                break;
        }
        if(ans==n)
            cout<<ans;
        else
            cout<<ans+1;
    }

    return 0;

}

