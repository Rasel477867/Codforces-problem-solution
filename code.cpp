
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
vector<ll>v;
vector<ll>v1;
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
    ll n,k,b,a,sum,on,ans,c,p;

    string s;
    cin>>n>>s;
    ans=0;
    c=0;
    p=n;
    for(i=n-1; i>=0; i--)
    {
        if(s[i]=='0')
        {
            p=i;
            v1.pb(0);
        }
        else {
            break;
        }
    }
    for(i=0; i<p; i++)
    {
        if(s[i]=='1')
            ans++;
        else{
           v.pb(ans);
           ans=0;

            }

    }
    if(ans!=0)
        v.pb(ans);
    for(i=0; i<v.size(); i++)
        cout<<v[i];
    for(i=0; i<v1.size(); i++)
        cout<<v1[i];
    cout<<endl;


    return 0;
}
