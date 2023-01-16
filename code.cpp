



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
vector<ll>v;
set<ll>s;
set<ll>:: iterator it;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,p,m,i,a,ans;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);

    }
    for(i=1; i<n; i++)
        v[i]=v[i]+v[i-1];


    p=0;
    ll j;
   ans=0;
   for(j=0; j<n; j++)
   {

       if(v[j]<=m)
        {
            ans++;

        }
       else
       {

           break;
       }
   }
    for(i=j; i<n; i++)
    {


        a=v[i]-v[p];

        if(a>m)
        {
            ans=max(i-p-1,ans);
            p++;
        }
        else
        {
            ans=max(ans,i-p);

        }
    }

    cout<<ans<<endl;
}
