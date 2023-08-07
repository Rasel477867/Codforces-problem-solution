
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
vector<pair<char,ll> >v;
vector<pair<char,ll> >v1;

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
    ll n,num,a,b,c,pre;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        v.clear();
         v1.clear();
        for(i=0; i<n; i++)
        {
            v.pb({s[i],i});
        }
        sort(v.begin(),v.end());
        c=0;
       v1.pb({v[0].first,0});
        pre=v[0].second;

        for(i=1; i<n; i++)
        {
            if(v[i].second>pre)
            {
                pre=v[i].second;
                v1.pb({v[i].first,i});
            }
            else
            {

                if(v[i].first=='9')
                    {
                        v1.pb({'9',i});
                    }
                else
                {
                    char ch=v[i].first+1;
                    v1.pb({ch,i});
                }
            }
        }
        sort(v1.begin(),v1.end());
        for(i=0; i<n; i++)
            cout<<v1[i].first;
        cout<<endl;
    }



    return 0;
}
