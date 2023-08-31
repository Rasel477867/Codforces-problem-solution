
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
set<ll>s;
deque<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        if(s.size()==1)
            cout<<1<<endl;
        else if(s.size()==2)
        {
            a=n/2;
            a++;
            cout<<a<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }




    return 0;

}

