
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
ll k,ak,a1,n;
bool cheak(ll mid)
{
    ll p=mid*k+k*ak+a1,num;
    if(p>=n)
        return true;
    else if(p<n)
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
    ll j,i,t;
    ll a,b,num,ans,l,r,mid;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>a1>>ak;
        num=a1+k*ak;

        if(num==n)
            cout<<0<<endl;
        else if(num>n)
        {
             a=n/k;

             if(a<=ak)
                b=a*k;
             else
                b=ak*k;


                n=n-b-a1;
                if(n<=0)
                    cout<<0<<endl;
                else
                    cout<<n<<endl;

        }
        else
        {
            l=0;
            r=1e8;
            while(r>=l)
            {
                mid=(l+r)/2;
                if(cheak(mid))
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                    l=mid+1;
            }

            a=ans*k+k*ak+a1;
            if(a==n)
                cout<<ans<<endl;
            else
            {
                b=a-n;
                if(b<=a1)
                    cout<<ans<<endl;
                else{
                   ans--;
                   a=ans*k+ak*k+a1;
                   b=n-a;
                   ans+=b;
                   cout<<ans<<endl;
                }

            }
        }
    }
    return 0;
}
