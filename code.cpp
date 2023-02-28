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
//ordered_multiset s3;
//ordered_multiset :: iterator it;
const ll mod=1e9+7;

const ll N=1e1;
bool sive[N];
vector<ll>prime;
vector<ll>v;
vector<ll>p;
set<ll>s;
set<ll>:: iterator it;
ll k,num,m;

long long int gcd(long long int a,long long int b)
{
    long long int c;
    while(a%b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return b;
}
double cal(double x)
{
    double y=sqrt(x);
    return(x*x+2*y);
}
bool cheak(ll n)
{
    ll b,c,a;
    if(n>=k)
    {
        a=(((n*(n+1))/2)-((n-k)*((n-k)+1)/2));
    }
    else{
        a=((n*(n+1))/2)+k-n;
    }
    ll n1=n-1;
    c=num-k;
    if(c<=n1)
    {
        b=(((n1*(n1+1))/2)-(((n1-c)*((n1-c)+1))/2));
    }
    else{

        b=((n1*(n1+1))/2)+c-n1;

    }


    if(a+b<=m)
        return true;
    else
        return false;

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    for(i=0; i<N; i++)
    {
        sive[i]=true;
    }
    sive[0]=false;
    sive[1]=false;
    for(i=2; i*i<=N; i++)
    {
        if(sive[i])
        {
            for(j=i*i; j<N; j+=i)
            {
                sive[j]=false;
            }
        }
    }
    for(i=0; i<N; i++)
    {
        if(sive[i]==true)
            prime.pb(i);
    }

    /*start main funciton*/
    ll ans=0,mid,a,b,l,r;

    cin>>num>>m>>k;
    l=1;
    r=1e9;


    while(r>=l)
    {
        mid=(l+r)/2;
        if(cheak(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }


   cout<<ans;


    return 0;
}

