#include<bits/stdc++.h>
#define ll long long int 
#define rep(i,n) for(ll i=0 ; i<n ; i++ )
#define reps(i,a,n) for(ll i=a; i<n ; i++)
#define FASTIO ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

using namespace std;

int main()
{
    FASTIO
    int t;
    cin>>t;
    while(t--)
        {
            ll n;
            cin>>n;
            ll a[n];
            
            rep(i,n)
            cin>>a[i];
            
            ll count=0 , temp=a[n-1];
            
            vector <ll> num{};
            
            for( ll i=n-1 ; i>=0; i--)
               {
                   if(a[i]>=temp)
                     {
                         num.push_back(a[i]);
                         temp=a[i];
                         count++;
                     }
               }
               
            for( ll i=count-1 ; i>=0 ; i--)
            cout<<num.at(i)<<" ";
            
            cout<<"\n";
        }
  
  return 0;
}