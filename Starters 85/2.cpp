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

    string s;
    cin>>s;

    int n = s.length();

    if(n<4){
        int r = stoi(s);
        cout<<r%20<<endl;
        return;
    }

    int b = stoi(s.substr(n-2,2));

    cout<<b%20<<endl;


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