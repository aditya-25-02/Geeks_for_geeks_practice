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
          
          int n ,count =0;;
          cin>>n;
          int arr[n];
          
          rep(i,n)
          cin>>arr[i];
          
          for ( int i=0 ; i<n ; i++) {
                
                int num1=arr[i];
                
                for (int j=i+1 ; j<n ; j++) {
                     
                     int num2 =arr[j];
                     if( (num1+num2) % 4 == 0 )  count++;
                }
          }
          
          cout<<count<<"\n"; 
    }
   
    return 0;
}