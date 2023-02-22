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
  set<ll>s;
  set<ll>:: iterator it;



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
   ll t,n,a,b,d,mx;
   cin>>t;
    while(t--)
    {
        cin>>n;
        s.clear();
        v.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.insert(a);
            v.pb(a);
        }
        sort(v.begin(),v.end());
        a=1;
        b=1;
        if(s.size()==1)
        {
            cout<<(n-1)*n<<endl;
        }
        else{
            for(i=0; i<n; i++)
            {
                if(v[i]==v[i+1])
                    a++;
                else
                    break;

            }
            for(i=n-1; i>0; i--)
            {
                if(v[i]==v[i-1])
                    b++;
                else
                    break;
            }
            cout<<a*b*2<<endl;
        }
    }



return 0;
}

