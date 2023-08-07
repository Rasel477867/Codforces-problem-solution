
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
    ll n,a,b,y=0,k,mn=1e9,ans;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);

        s.insert(a);
        mn=min(a,mn);
    }
    if(s.size()==1)
        cout<<0<<endl;
    else{


            ans=0;
            for(i=0; i<n; i++)
            {
                a=v[i]-mn;
                b=a/k;

                if(b*k!=a)
                    y=1;
                ans+=b;

            }
            if(y==1)
                cout<<-1<<endl;
            else
            cout<<ans;

    }

    return 0;
}
