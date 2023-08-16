
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
    ll j,i;
    ll a,b,c,t,g,n;
    a=0;
    c=0;
    t=0;
    g=0;
    string s;
    cin>>n>>s;
    if(n%4==0)
    {
        for(i=0; i<n; i++)
        {
          if(s[i]=='A')
            a++;
          else if(s[i]=='G')
            g++;
          else if(s[i]=='C')
            c++;
          else if(s[i]=='T')
            t++;
        }
        b=n/4;
        for(i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                if(b>a)
                {
                    a++;
                    s[i]='A';
                }
                else if(b>c)
                {
                    c++;
                    s[i]='C';
                }
                else if(b>t)
                {
                    s[i]='T';
                    t++;
                }
                else {
                    s[i]='G';
                    g++;
                }
            }
        }

        if((a==b && b==c)&&(g==b && t==b))
            cout<<s;
        else
            cout<<"===";

    }
    else
        cout<<"===";



    return 0;
}
