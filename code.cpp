



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,n,a,b,sum=0,sum1=0,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
        v.pb(a);
    }
    for(i=0; i<n-1; i++)
    {
        sum1+=v[i];
        if(2*sum1==sum)
            c++;
    }
    cout<<c;
    return 0;
}
