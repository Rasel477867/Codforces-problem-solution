
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
map<char,ll>m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    string s,s1;
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>s>>s1;
        n=s.size();
        m.clear();
        for(i=n-1; i>=0; i--)
        {
            if(s1.size()==0)
                break;
            if(s[i]==s1.back())
            {
                if(m[s[i]]==0)
                    s1.pop_back();
                else
                    break;
            }
            else
                m[s[i]]=1;
        }
        if(s1.size()==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }





    return 0;

}

