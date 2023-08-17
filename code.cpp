
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
vector<pair<ll,ll> >v1;
vector<ll>v;
ll ar[1000000];

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
    ll t,x,y,n,m,ans,a,b,c,d1,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y>>d1;
        a=x-d1;
        b=x+d1;
        c=y-d1;
        d=y+d1;
        if((a<=1&& b>=n)||(c<=1 && d>=m))
            cout<<-1<<endl;
        else if(a<=1 && c<=1)
            cout<<-1<<endl;
        else if(b>=n && d>=m)
            cout<<-1<<endl;
        else{
            ans=n-1+m-1;
            cout<<ans<<endl;
        }
    }

    return 0;
}
