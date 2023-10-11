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

    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    ll resones=0,reszeros=0;

    for(ll i=0;i<k;i++){

        ll ones = 0, zeros = 0;
        
        for(ll j=i;j<n;j+=k){
            if(s[j]=='0') zeros++;
            else ones++;
        }

        if(ones==0) resones=LLONG_MAX;

        ll temp1;

        if(ones%2==0){
            temp1 = ones/2;
        }
        else{
            temp1 = (ones/2+2);
        }

        reszeros += temp1;
        
        if(resones<LLONG_MAX)
            resones += zeros;

    }


    cout<<min(resones,reszeros)<<endl;




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