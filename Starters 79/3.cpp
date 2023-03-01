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

    ll x,y;
    cin>>x>>y;

    if((x-y)>=2){
        cout<<"CHEF"<<endl;
        return;
    }
    if((y-x)>=2){
        cout<<"CHEFINA"<<endl;
        return;
    }

    if(x==y){
        if(x%2==0){
            cout<<"CHEFINA"<<endl;
        }
        else{
            cout<<"CHEF"<<endl;
        }
        return;
    }

    int tm = min(x,y);

    if(tm%2==1){
        cout<<"CHEF"<<endl;
    }
    else{
        cout<<"CHEFINA"<<endl;
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