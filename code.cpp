
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

//ll ex(ll a,ll b,ll mod)
//{
//    if(b==0)
//        return 1;
//    else if(b%2==0)
//        return (ex((a*a)%mod,b/2,mod));
//    else
//        return (a*ex((a*a)%mod,(b-1)/2,mod))%mod;
//}
//long long int gcd(long long int a,long long int b)
//{
//    long long int c;
//    while(a%b!=0)
//    {
//        c=b;
//        b=a%b;
//        a=c;
//    }
//    return b;
//}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll j,i,t;
    ll n,m,a,b,p,x,y;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    reverse(v.begin(),v.end());
    b=m;
    x=v[0];
    for(i=1; i<n; i++)
    {
        x+=v[i]*b;
        b=b*m;
    }
    v.clear();
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    reverse(v.begin(),v.end());
    b=m;
    y=v[0];
    for(i=1; i<n; i++)
    {
        y+=v[i]*b;
        b=b*m;
    }
    if(x>y)
        cout<<">";
    else if(x<y)
        cout<<"<";
    else
        cout<<"=";
    return 0;
}
