
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
    ll j,i;
    ll a,b,c,ans,n;
    cin>>n>>a>>b>>c;
    if(n==1)
        cout<<0;
    else{
        ans=0;
        if(a<=b && a<=c)
        {
            ans+=a*(n-1);
            cout<<ans;
        }
        else if(b<=a && b<=c)
        {
            ans+=b*(n-1);
            cout<<ans;
        }
        else if(c<a&& c<b)
        {
            b=min(a,b);
            n-=2;
            ans+=b;
            ans+=c*n;
            cout<<ans;
        }

    }



    return 0;
}
