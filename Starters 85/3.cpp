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

    if(n<3){
        cout<<"0"<<endl;
        return;
    }

    int res = 2;

    n -= 3;

    if(n%2==0){
        res += (n/2)*3;
    }
    else{
        res += (n/2)*3 +1;
    }

    cout<<res<<endl;
    


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