
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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll a,b,m,n,sum,ans=0,mn,y;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ans+=a;
    }
    cin>>t;
    ll mx=0;
    while(t--)
    {
        cin>>a>>b;
        mn=max(a,b);
        mx=max(mx,mn);
        ar[a]=1;
        ar[b]=-1;
    }
    sum=0;
    for(i=1; i<=mx; i++)
    {
        if(ar[i]==1 && sum==0)
        {
            ar[i]=1;
            sum=1;
        }
        else if(ar[i]==-1)
        {
            ar[i]=1;
            sum=0;
        }
        else if(sum==1)
        {
            ar[i]=1;
        }


    }
    if(ans>mx)
        cout<<-1<<endl;

    else
    {
        y=0;
        for(i=ans; i<=mx; i++)
        {
            if(ar[i]==1)
            {
                ans=i;
                y=1;
                break;
            }
        }
        if(y==1)
            cout<<ans;
        else
            cout<<-1<<endl;
    }

    return 0;

}
