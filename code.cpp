#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
//ordered_multiset :: iterator it;
vector<ll>v;
bool cheak(ll n,ll a)
{
    return(n&(1<<a));
}
ll bset(ll n,ll i)
{
    return(n|(1<<i));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a1,ans1,a,ans,sum=0,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
        v.pb(a);
    }
    ll num=1<<n;
    ll mask;
    ll result=sum;


    for(mask=1; mask<num; mask++)
    {
        ans=0;
        for(i=0; i<n; i++)
        {
            if(mask&(1<<i))
            {
                ans+=v[i];
            }
        }
        ans1=sum-ans;
        ll c=abs(ans-ans1);
       result=min(c,result);
    }
    cout<<result;

  return 0;
}
