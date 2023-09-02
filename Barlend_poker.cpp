
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll t,a,n,b,d,k,m,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        a=n/k;
        if(m==0)
            cout<<0<<endl;
        else{
            if(m<=a)
            cout<<m<<endl;
            else{
                c=m-a;
                k--;
                d=c/k;
                if(d*k!=c)
                    d++;
                cout<<a-d<<endl;

            }

        }
    }
    return 0;

}

