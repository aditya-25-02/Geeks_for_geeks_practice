#include<bits/stdc++.h>
#define ll long long int 
#define rep(i,n) for(ll i=0 ; i<n ; i++ )
#define reps(i,a,n) for(ll i=a; i<n ; i++)
#define FASTIO ios_base::sync_with_stdio(false) ; cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    
    FASTIO
    int t;
    cin>>t;
    while(t--) {
         
         int n , k;
         cin >> n >> k ;
         
         int arr[n] = {0} ;
         int changes[k] ;
         
         rep(i,k)
         cin>>changes[i];
         
         for ( int i= 0 ; i<k ; i++) {
               
               int init_index = changes[i]-1;
               
               for( int j=init_index ; j<n ; j++) 
               arr[j]+=1;
         }
         
         rep(i,n)
         cout<<arr[i]<<" ";
         
         cout<<"\n";
         
    }
  
    return 0;
}