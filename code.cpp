
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
map<ll,ll>ans1;
map<ll,ll>ans;
vector<pair<ll,ll> >v;
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
    ll t,j,i;
    ll n,num,a,b,y,c,pr=1;
    cin>>t;
    while(t--)
    {
        cin>>num;
        y=num;
        for(i=1; i<=num; i++)
            ar[i]=0;
        num--;
        ans.clear();
        v.clear();
        pr=1;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            ans[a]=1;
        }
        while(num--)
        {
            pr++;
            cin>>n;
            for(i=0; i<n; i++)
            {
                cin>>a;
                ans.erase(a);

                ans[a]=pr;


            }
        }

        for(it=ans.begin(); it!=ans.end(); it++)
            {
                a=it->first;
                b=it->second;
                if(ar[b]==1)
                    continue;
                v.pb({b,a});
                ar[b]=1;
            }
        sort(v.begin(),v.end());
        if(v.size()==y)
        {
            for(i=0; i<y; i++)
                cout<<v[i].second<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
