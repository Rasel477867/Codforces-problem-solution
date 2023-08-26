
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
ll ar[1000000];
vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j,n,m,a,sum,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=0;
        v.clear();
        v.pb(0);

        for(i=0; i<n; i++)
        {
            cin>>a;
            m=max(a,m);
            v.pb(a);

        }
        if(m>n)
            cout<<"NO"<<endl;
        else{
            for(i=0; i<=n; i++)
                  ar[i]=0;
            for(i=1; i<=n; i++)
            {
                a=v[i];
                ar[a]++;
            }
            sum=0;

            for(i=n; i>=1; i--)
            {
                sum+=ar[i];
                ar[i]=sum;

            }
            y=0;
            for(i=1; i<=n; i++)
              {
                if(ar[i]==v[i])
                    continue;
                else
                {
                    y=1;
                    break;
                }
              }
              if(y==1)
                    cout<<"NO"<<endl;
              else
                cout<<"YES"<<endl;
        }

    }



    return 0;

}
