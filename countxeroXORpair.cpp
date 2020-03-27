#include<bits/stdc++.h>
#define ll long long int 
#define rep(i,n) for(ll i=0 ; i<n ; i++ )
#define reps(i,a,n) for(ll i=a; i<n ; i++)
#define FASTIO ios_base::sync_with_stdio(false) ; cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    FASTIO
    int t;
    cin>>t;
    while(t--)
         {
             ll n ;
             cin>>n;
             ll a[n];
             
             rep(i,n)
             cin>>a[i];
             
             ll count=0;
             
             for ( ll i=0; i<n-1 ; i++)
                {
                    for( ll j=i+1 ; j<n ; j++)
                       {
                           if(  ( a[i] | a[j] ) & ( ~a[i] | ~a[j] ) )
                           continue;
                           count++;
                       }    
                }
             cout<<count<<"\n";    
         }
    return 0;
}