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

    ll n,l,r;
    cin>>n>>l>>r;

    int i=0,j=n;
    int res=0;
    int ii=0;
    while(i<j){
        int mid = (i+j)/2;
        if(mid<=l){
            j=mid-1;
            res = res +1<<ii;
        }
        else{
            i=mid+1;
        }
        ii++;
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