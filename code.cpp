
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
vector<string>v;
map<ll,ll>m;
//bool cheak(ll n,string s,string s1)
//{
//    set<string>s2;
//
//    ll i;
//    if(s.size()%n!=0 || s.size()<n)
//        return false;
//    for(i=0; i<s.size()-n+1; i=i+n)
//    {
//        sub=s.substr(i,n);
//
//       if(s2.size()>1)
//          return false;
//        s2.insert(sub);
//
//    }
//    if(s1.size()%n!=0 || s1.size()<n)
//        return false;
//    for(i=0; i<s1.size()-n+1; i+=n)
//    {
//        sub=s1.substr(i,n);
//
//        if(s2.size()>1)
//            return false;
//        s2.insert(sub);
//    }
//    if(s2.size()==1)
//        return true;
//    else
//        return false;
//}
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
    ll n,a,b,c,ans,d,f,k;
    cin>>n>>k;
    b=k*2;
    ans=0;
    f=0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        c=a/b;
        ans+=c;
        if(c*b==a)
            continue;
        d=a-b*c;
        if(d>k)
            f+=2;
        else
            f++;
    }
    ans+=f/2;
    if(f%2==1)
        ans++;
    cout<<ans<<endl;

    return 0;



}
