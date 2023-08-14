
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
    ll t,j,i;
    ll n,c,ans=0,p,pr,b,a;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans=0;
        if(a==b)
            cout<<2<<endl;
        else if(a<b)
            cout<<1<<endl;
        else
        {
          p=0;
          c=0;
          pr=0;
          if(b==1)
          {
              pr=1;
              b++;
          }
          ans=1e10;
          for(i=b; i<=a; i++)
          {
              if(p>50)
                break;
             n=a;
             c=p;
            while(n!=0)
            {
                n=n/i;
                c++;
            }
            p++;
            ans=min(c,ans);


          }
          cout<<ans+pr<<endl;
        }

    }

    return 0;
}
