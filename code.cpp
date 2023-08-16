
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
ll ar[1000000];
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
    ll t,j,i;
    ll a,n,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        for(i=1; i<=n; i++)
            ar[i]=1;
        v.pb(1);
        p=2;
        q=3;
        for(i=1; i<=n; i++)
        {
            if(ar[p]==0)
                continue;
            v.pb(p);
            ar[p]=0;
            p=p*2;
            if(p>n)
               {
                   p=q;
                   q+=2;
               }

        }
        for(i=3; i<=n; i++)
        {
            if(ar[i]==1)
                v.pb(i);
        }
        for(i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }


    return 0;
}
