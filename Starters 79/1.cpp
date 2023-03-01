#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M=1e9+7;
long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a, long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
    return mod(mod(a)*mod(b));
}


void solve(){

    ll n;
    cin>>n;

    vector<ll> v;

    for(ll i=1;i<=n/2;i++){
        v.push_back(i);
    }

    for(ll i=n;i>n/2;i--){
        v.push_back(i);
    }


    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;


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