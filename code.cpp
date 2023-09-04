
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
deque<char>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll n,t,a,b,y;
    string s;
    cin>>t;
    char ch;
    while(t--)
    {
        cin>>s;
        n=s.size();
        v.clear();
        for(i=0; i<n; i++)
        {
            v.pb(s[i]);
        }
        for(i=0; i<n; i++)
        {
            if(v.front()=='0')
                v.pop_front();
            else
               {
                    ch=v.front();
                   v.pop_front();
                   if(v.front()=='0')
                     continue;
                   else{
                    v.pf(ch);
                   }
               }
        }
        if(v.size()==0)
            cout<<"YES"<<endl;
        else
        {
            for(i=0; i<v.size(); i++)
            {
                if(v.back()=='1')
                    v.pop_back();
                else
                    {
                        ch=v.back();
                       v.pop_back();
                       if(v.back()=='1')
                       {
                           continue;
                       }
                       else{
                        v.pb(ch);
                       }
                    }
            }
            if(v.size()==0)
                cout<<"YES"<<endl;
            else
            {
                y=0;
                v.pb('1');
                for(i=0; i<v.size()-1; i++)
                {
                    if(v[i]=='0' && v[i+1]=='0')
                    {
                        y=1;
                        break;
                    }
                }
                if(y==0)
                    cout<<"YES"<<endl;
                else
                {
                    y=0;
                    for(i=0; i<v.size()-1; i++)
                    {
                        if(v[i]=='1' && v[i+1]=='1')
                        {
                            y=1;
                            break;
                        }
                    }
                    if(y==0)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
        }
    }

    return 0;

}
