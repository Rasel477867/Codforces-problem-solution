
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
map<string,ll>m;
map<ll,string>m1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    ll t,i,j;
    ll a,b,c,p;
    m["S"]=0;
    m["M"]=1;
    m["L"]=2;
    m["XL"]=3;
    m["XXL"]=4;
    m1[0]="S";
    m1[1]="M";
    m1[2]="L";
    m1[3]="XL";
    m1[4]="XXL";
    for(i=0; i<5; i++)
    {
        cin>>a;
        v.pb(a);
    }
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=m[s];
        if(v[p]>0)
        {
            cout<<s<<endl;
            v[p]--;
        }
        else
        {
            a=p-1;
            b=p+1;
            for(i=0; i<5; i++)
            {
                if(b!=5)
                {
                    if(v[b]>0)
                    {
                        cout<<m1[b]<<endl;
                        v[b]--;
                        break;
                    }
                    else
                        b++;
                }
                if(a!=-1)
                {
                    if(v[a]>0)
                    {
                        cout<<m1[a]<<endl;
                        v[a]--;
                        break;
                    }
                    else
                        a--;
                }

            }
        }

    }

    return 0;

}
