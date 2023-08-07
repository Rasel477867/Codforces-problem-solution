
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
set<ll>s;
ll n,k;
bool cheak(ll num)
{
    ll sum=1,p=v[num],i;
    for(i=num+1; i<v.size(); i++)
    {
        sum+=n-v[i];
    }
    if(p>=sum)
      return true;
    else
        return false;
}
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
    ll l,r,ans,a,b,mid;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n>>k;
        ll ans1=0;
        for(i=0; i<k; i++)
        {
            cin>>a;
            if(a>=n)
                ans1++;
            else
                v.pb(a);
        }
        sort(v.begin(),v.end());
        l=0;
        r=k-1;
        while(r>=l)
        {
            mid=(l+r)/2;
            if(cheak(mid))
            {
                b=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        ans=k-b+ans1;


        cout<<ans<<endl;
    }

    return 0;
}
