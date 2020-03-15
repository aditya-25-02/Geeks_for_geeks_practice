#include<bits/stdc++.h>
#define ll long long int 
#define rep(i,n) for(ll i=0 ; i<n ; i++ )
#define reps(i,a,n) for(ll i=a; i<n ; i++)

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
       {
           ll n , d ;
           cin>>n>>d;
           
           ll original_arr[n] ;
           
           rep(i,n)
           cin>>original_arr[i];
              
            for( ll i=d ; i<n ; i++)
            cout<<original_arr[i]<<" ";
            
            for( ll i=0; i<d ; i++)
            cout<<original_arr[i]<<" ";
            
            cout<<"\n";
       }
  return 0;
}