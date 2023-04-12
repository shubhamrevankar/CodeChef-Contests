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
    vector<int> a(n);
    for(auto &x:a) cin>>x;

    int runs = 0;

    int c=0;

    for(int i=0;i<n;i++){
        runs += a[i];
        if(runs == i+1){
            c++;
        }
    }

    cout<<c<<endl;


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