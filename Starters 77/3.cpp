#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    ll n,m;
    cin>>n>>m;
    string A,B;
    cin>>A;
    cin>>B;

    if(n<m){
        swap(A,B);
        swap(n,m);
    }
    
    vector<ll> mp(256,0);

    for(ll i=0;i<n;i++){
        mp[A[i]]++;
    }
    for(ll i=0;i<m;i++){
        mp[B[i]]--;
    }
    int o =0;

    for(auto x:mp){
        if(x%2==1){
            o++;
        }
        if(x<0){
            cout<<"NO"<<endl;
            return;
        }
    }

    if(o>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    




}






int main() {
	long long t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
	return 0;
}