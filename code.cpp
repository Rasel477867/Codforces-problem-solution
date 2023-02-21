#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
//ordered_multiset s3;
//ordered_multiset :: iterator it;
const ll mod=1e9+7;

const ll N=1e1;
 bool sive[N];
 vector<ll>prime;
 vector<ll>v;




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    for(i=0; i<N; i++)
    {
        sive[i]=true;
    }
    sive[0]=false;
    sive[1]=false;
    for(i=2; i*i<=N; i++)
    {
        if(sive[i])
        {
            for(j=i*i; j<N; j+=i)
            {
                sive[j]=false;
            }
        }
    }
    for(i=0; i<N; i++)
    {
       if(sive[i]==true)
           prime.pb(i);
    }

    /*start main funciton*/
    string s;
    ll  c=1;
    for(i=1; ; i+=c)
    {
        c++;
        v.pb(i);
        if(i>=1000)
             break;

    }

     ll t,n,k,a,b,num;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        num=k;
        c=0;
        ll y=1;
        for(i=0;i<=n; i++)
        {
            k--;
            a=n-v[i];
            if(a>=k)
            {  if(c==num)
                  {
                      y=0;
                      break;
                  }
                cout<<v[i]<<" ";
                b=v[i];
                c++;
            }
            else
                break;
        }
        if(y==0)
            continue;
        k=num-c;


        for(i=b+1; i<b+1+k; i++)
            cout<<i<<" ";
        cout<<endl;
    }


return 0;
}

