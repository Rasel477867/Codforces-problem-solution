
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
deque<ll>v;
deque<ll>v1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll a,b,c,d,al=0,bl=0,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        v1.clear();
        al=0;
        bl=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0)
                v.pb(a);
            else
                v1.pb(a);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(i=0; i<n; i++)
        {
            if(v.size()==0)
                a=0;
            else
               a=v.back();
            if(v1.size()==0)
                b=0;
            else
                b=v1.back();
            if(i%2==0)
            {
                if(a>=b)
                {
                    al+=a;
                    v.pop_back();
                }
                else
                    v1.pop_back();
            }
            else{
                if(b>=a)
                {
                    bl+=b;
                    v1.pop_back();
                }
                else
                    v.pop_back();
            }

        }
        if(al==bl)
            cout<<"Tie"<<endl;
        else if(al>bl)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }

    return 0;

}

