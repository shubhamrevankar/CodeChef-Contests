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
    vector<ll> w(n),a(n);
    for(auto &x:w) cin>>x;
    for(auto &x:a) cin>>x;

    
    for(ll i=0;i<n;i++){

        ll prev1=0,inc1=0;
        for(ll j=i+1;j<n;j++){
            if(prev1<(a[j]-w[j])){
                inc1 += ((a[j]-w[j])-prev1);
                prev1 = a[j];
            }
            else{
                prev1 += (a[j]-w[j]);
            }
        }

        ll prev2=0,inc2=0;
        for(ll j=i-1;j>=0;j--){
            if(prev2<(a[j]-w[j])){
                inc2 += ((a[j]-w[j])-prev2);
                prev2 = a[j];
            }
            else{
                prev2 += (a[j]-w[j]);
            }
        }

        ll dif = (a[i]-w[i]);
        cout<<max(inc1+inc2-w[i],dif)<<" ";


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