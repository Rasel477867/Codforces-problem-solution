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
const ll mod=1e9;
ll comb[1007][1007];
const ll N=1e1;
bool sive[N];
vector<ll>prime;
ll fact[N];
vector<ll>v;

int convert(string s)
{
    int a,b;
    a=s[0]-48;
    b=s[1]-48;
    return (a*10+b);
}

//string cal(string s1,string s2,int x)
//{
//    ll h,m,c,d,a,b;
//    string a1,b1;
//    char ch;
//    h=convert(s1);
//    m=convert(s2);
//    c=x/60;
//    h+=c;
//    d=x-c*60;
//    m+=d;
//    h+=m/60;
//    m=m%60;
//    if(h>=24)
//    {
//        h=0;
//        k++;
//    }
//    if(m<10)
//    {
//        ch=m+48;
//        b1.pb('0');
//        b1.pb(ch);
//
//    }
//    else
//    {
//        a=m%10;
//        ch=a+48;
//        m=m/10;
//        b1.pb(m+48);
//        b1.pb(ch);
//    }
//    if(h<10)
//    {
//        ch=h+48;
//        a1.pb('0');
//        a1.pb(ch);
//    }
//    else
//    {
//        a=h%10;
//        ch=a+48;
//        h=h/10;
//        a1.pb(h+48);
//        a1.pb(ch);
//    }
//    return(a1+":"+b1);
//
//}
//
//
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
//
//
//ll ex(ll a,ll b,ll mod)
//{
//    if(b==0)
//        return 1;
//    else if(b%2==0)
//        return (ex((a*a)%mod,b/2,mod));
//    else
//        return (a*ex((a*a)%mod,(b-1)/2,mod))%mod;
//}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
//    for(i=0; i<N; i++)
//    {
//        sive[i]=true;
//    }
//    sive[0]=false;
//    sive[1]=false;
//    for(i=2; i*i<=N; i++)
//    {
//        if(sive[i])
//        {
//            for(j=i*i; j<N; j+=i)
//            {
//                sive[j]=false;
//            }
//        }
//    }
//    for(i=0; i<N; i++)
//    {
//        if(sive[i]==true)
//            prime.pb(i);
//    }
    for(i=0; i<=1005; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(i==j)
                comb[i][j]=1;
            else if(j==0)
                comb[i][j]=1;
            else
                comb[i][j]=((comb[i-1][j-1])%mod+comb[i-1][j]%mod)%mod;
        }
    }

    fact[0]=1;
    fact[1]=1;
    for(i=1; i<N; i++)
    {
        fact[i]=(((fact[i-1])%mod)*(i%mod))%mod;
    }

    //start main funciton
    ll t,b,r,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        b=0,r=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='R')
                r=1;
            else if(s[i]=='B')
                b=1;
            else
            {
                if(r!=b)
                    break;
                r=0;
                b=0;
            }
        }
        if(b==r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }






    return 0;

}
