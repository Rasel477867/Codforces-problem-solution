
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
    ll n,ans,a;
    t=1;
    while(t--)
    {
        cin>>n;
        if(n<6 || n%2==1)
            cout<<0<<endl;
        else{
            a=n/4;
            ans=a-1;
            if(a*4!=n)
                ans++;
            cout<<ans<<endl;
        }
    }


    return 0;

}

