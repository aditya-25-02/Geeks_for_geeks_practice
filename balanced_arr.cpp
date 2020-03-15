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
             int n ;
             cin>>n;
             ll a[n] , l_sum=0 , r_sum=0 ;
             
             rep(i,n)
             cin>>a[i];
             
             rep(i,n/2)
             l_sum+=a[i];
             
             reps(i,n/2,n)
             r_sum+=a[i];
             
             cout<<abs(l_sum-r_sum)<<"\n";
             
         }
    return 0;
}