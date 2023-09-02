
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
map<ll,multiset<ll> >m;
ll ans[300][300];
multiset<ll>::iterator it;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll t,n,k,a,y,key;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        m.clear();
        v.clear();

        for(i=0; i<n; i++)
        {
            for(j=0; j<k; j++)
            {
                cin>>a;
                v.pb(a);
                m[i].insert(a);
            }
        }
        sort(v.begin(),v.end());
        for(i=0; i<k; i++)
        {
            y=0;
            key=v[i];
            for(j=0; j<n; j++)
            {
                if(y==0)
                {
                    it=m[j].lower_bound(key);
                    if(*it==key)
                    {
                        y=1;
                        ans[j][i]=key;
                       // ans[i].pb(key);
                        m[j].erase(it);
                    }
                    else
                    {
                        it=m[j].end();
                        it--;
                        ans[j][i]=*it;
                        //ans[i].pb(*it);
                        m[j].erase(it);
                    }
                }
                else
                {
                    it=m[j].end();
                    it--;
                    ans[j][i]=*it;
                    //ans[i].pb(*it);
                    m[j].erase(it);
                }
            }
        }
       for(i=0; i<n; i++)
       {
           for(j=0; j<k; j++)
            cout<<ans[i][j]<<" ";
           cout<<endl;
       }
    }

    return 0;

}
