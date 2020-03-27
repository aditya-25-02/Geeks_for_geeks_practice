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
          
          int n;
          cin>>n;
          int a[n] , index=0 ;
          
          rep(i,n)
          cin>>a[i];
          
          rep(i,n) {
             
             if(a[i]==0) {
                index=i;
                break;
             }    
             if(i==n-1)
             index=n;
          }      
             
             
          cout<<n-index<<"\n";
          
    }
    
    return 0;
}