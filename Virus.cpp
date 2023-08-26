
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
vector<ll>v1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,ans,c,k,mx,mn;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        v.clear();
        v1.clear();
        mx=0;
        mn=1e9;
        for(i=0; i<k; i++)
        {
            cin>>a;
            mn=min(a,mn);
            mx=max(a,mx);
            v.pb(a);
        }
        a=mn-1+n-mx;
        v1.pb(a);
        sort(v.begin(),v.end());
        for(i=0; i<k-1; i++)
        {
            a=v[i+1]-v[i]-1;
            v1.pb(a);
        }
        sort(v1.begin(),v1.end());
        b=v1.size();
        if(v1[b-1]==0)
            ans=0;
        else if(v1[b-1]==1 || v1[b-1]==2)
            ans=1;
        else {
           ans=v1[b-1]-1;
           c=1;
           for(i=b-2; i>=0; i--)
           {
               a=v1[i]-4*c;
               if(a<=0)
                break;
               else if(a==1)
               {
                   ans+=1;
                   break;

               }
               else{
                a--;
                ans+=a;
               }
               c++;
           }
        }
        cout<<n-ans<<endl;
    }




    return 0;

}

