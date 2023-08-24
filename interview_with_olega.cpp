
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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll n,a,b,c;
    string s,ans;
    cin>>n>>s;
    ll p=-1;
    for(i=0; i<n-2; i++)
    {
        if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o')
        {
            s[i]='2';
            s[i+1]='2';
            p=i+2;
            i++;
        }
        else if(p!=-1)
        {
            s[p]='3';
            p=-1;
        }
    }
    if(p!=-1)
        s[p]='3';


   ll q=-1;
   for(i=0; i<n; i++)
   {
       if(s[i]=='2' && q==-1)
       {
           ans+="***";
           q=1;

       }
       else if(s[i]=='3')
       {
           q=-1;
       }
       else if(s[i]!='2' && s[i]!='3')
          ans.pb(s[i]);

   }
   cout<<ans<<endl;
return 0;

}
