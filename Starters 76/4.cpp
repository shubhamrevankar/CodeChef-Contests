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
    
    if(n%2==1){
        cout<<"-1"<<endl;
        return;
    }

    vector<ll> a(n,0);

    ll l =0,h=n-1;

    int r=1;

    while(l<h){

        if(r%2==1){
            a[l] = r;
        }
        else{
            a[h] = r;
        }
        l++;
        h--;
        r++;
        
    }

    for(auto x:a) cout<<x<<" ";
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