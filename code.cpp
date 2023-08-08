
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
    ll n,m,mx,mn;
    cin>>n>>m;
    if(n==0 && m==0)
        cout<<0<<" "<<0;
    else if(n==0)
    {
        cout<<"Impossible";
    }
    else if(m==0)
        cout<<n<<" "<<n;
    else{
        if(n<=m)
        {
            mx=n+m-1;
            mn=m;
        }
        else{
            mx=n+m-1;
            mn=n;
        }
        cout<<mn<<" "<<mx;
    }



    return 0;
}
