
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
map<ll,ll>:: iterator it;
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
    ll i,j,t;
    ll n,k,r,l,mid,ans;
    cin>>n>>k;
    float avg,key,sum=0.0,a;
    for(i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    key=k-1+0.5;
    l=0;
    r=1e9;
     ans=0;
    while(r>=l)
    {
        mid=(l+r)/2;
        avg=(sum+float(mid*k))/float(n+mid);
        if(avg>=key)
        {
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<ans;



    return 0;
}
