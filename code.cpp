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
ordered_multiset :: iterator it;
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
    ll n,i,a,ans;
    cin>>n;
   ll num=n;
    ll c=0;
    while(num!=0)
    {
        c++;
        num/=10;
    }
    ans=(1<<c)-1;

    i=0;
    while(n!=0)
    {
        ll rev=n%10;
        n=n/10;
        if(rev==7)
        {
            ans+=1<<i;
        }
        i++;
    }
    cout<<ans;
  return 0;
}
