
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
char ar[600][600];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll a,b,d,c,ans,n,k,m,y,on,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        z=0;
        on=0;
        for(i=0; i<=n+1; i++)
        {
            for(j=0; j<=m+1; j++)
            {
                ar[i][j]=1;
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='0')
                    z++;
                else
                    on++;
                ar[i][j]=ch;
            }
        }
        if(on==0)
            cout<<0<<endl;
        else
        {
            if(z==0)
                cout<<on-2<<endl;
            else if(z==1)
                cout<<on-1<<endl;
            else
            {
                y=0;
                for(i=1; i<=n; i++)
                {
                    for(j=1; j<=m; j++)
                    {
                        if(ar[i][j]=='0')
                        {
                            if(ar[i+1][j]=='0' || ar[i][j+1]=='0')
                            {
                                y=1;
                                break;
                            }
                            else if(ar[i+1][j+1]=='0' || ar[i+1][j-1]=='0')
                            {
                                y=1;
                                break;
                            }
                        }
                    }
                    if(y==1)
                        break;
                }
                if(y==1)
                    cout<<on<<endl;
                else
                    cout<<on-1<<endl;
            }
        }
    }








    return 0;

}

