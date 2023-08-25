
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
    ll i,j,t;
    ll l,p;
    string s;
    cin>>s;
    l=0;
    p=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='o')
            p++;
        else
            l++;
    }
    if(p==0)
        cout<<"YES"<<endl;
    else {
        if(l%p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;

}

