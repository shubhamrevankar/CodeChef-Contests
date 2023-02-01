#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define m 998244353
 
long long mod(long long x){
    return ((x%m + m)%m);
}
long long add(long long a, long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
    return mod(mod(a)*mod(b));
}
// Function to return the GCD of given numbers
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Recursive function to return (x ^ n) % m
ll modexp(ll x, ll n)
{
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return modexp((x * x) % m, n / 2);
    }
    else {
        return (x * modexp((x * x) % m, (n - 1) / 2) % m);
    }
}
 
// Function to return the fraction modulo mod
ll divd(ll a, ll b)
{
    ll c = gcd(a, b);
 
    a = a / c;
    b = b / c;
 
    // (b ^ m-2) % m
    ll d = modexp(b, m - 2);
 
    // Final answer
    ll ans = ((a % m) * (d % m)) % m;
 
    return ans;
}


void solve(){

    ll n,p;
    cin>>n>>p;

    ll S=0,d=1;

    for(ll i=1;i<=n;i++){

        ll newF = divd(S,(ll)2);

        ll adi = add(      divd ( mul(S,divd((ll)1,(ll)2),(ll)2) )  ,  divd(mul(S,divd((ll)1,(ll)2),(ll)2));
        newF = add(newF,)

    }



}






int main() {
    
    solve();
    
	return 0;
}