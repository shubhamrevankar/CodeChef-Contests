#include <bits/stdc++.h>
using namespace std;





void solve(){


long long A,B;
cin>>A>>B;

long long gcd = __gcd(A,B);

long long i=1;
long long res=INT_MAX;

while(gcd<=B){
    if(A%gcd==0 && B%gcd==0)
        res = min(res,(lcm(A,gcd)-__gcd(gcd,B)));
    gcd += gcd;
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