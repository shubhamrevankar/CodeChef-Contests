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
    

    int r =-300;

    ll flag=0;
    bool front=true;

    for(ll i=0;i<n;i++){
        cout<<r<<" ";
        if(front){
            if(flag%2==0){
                r = r+1;
            }
            else{
                r = r+3;
            }
        }
        else{
            if(flag%2==0){
                r = r-1;
            }
            else{
                r = r-3;
            }
        }
        
        if(r>300){
           front = false;
        }
        flag++;
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