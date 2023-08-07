
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
    ll n,num,a,b;
    string s;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        a=s[i]-48;
        v.pb(a);
    }
    a=n/2;
    b=n-a*2;
    if(n==3)
        cout<<v[0]<<v[1]<<v[2];
    else if(b==0)
    {
        for(i=0; i<n; i++)
        {
            if(i!=0 && i%2==0)
                cout<<"-"<<v[i];
            else
                cout<<v[i];
        }
    }
    else{
        for(i=0; i<n-2; i++)
        {
            if(i%2==0&& i!=0)
                cout<<'-'<<v[i];
            else
                cout<<v[i];
        }
        cout<<v[n-2]<<v[n-1];
    }



    return 0;
}
