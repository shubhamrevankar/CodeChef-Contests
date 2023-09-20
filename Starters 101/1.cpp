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

    ll n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int res=INT_MAX;
    
    for(int i=0;i<n-m;i++){
        int temp = 0;
        for(int j=0;j<m;j++){
            temp += abs(s2[j]-s1[i+j]);
        }
        res = min(res,temp);
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