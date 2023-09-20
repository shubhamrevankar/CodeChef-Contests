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
int invertBits(int num)
{
    // calculating number of bits
    // in the number
    int x = log2(num) + 1;
 
    // Inverting the bits one by one
    for (int i = 0; i < x; i++)
       num = (num ^ (1 << i));
  
    return num;
}

int flip(int inputNumber, int i) {
    int k = 1 << i;
    cout<<"k="<<(inputNumber)<<endl;
    return inputNumber ^ k;
}

void solve(){

    ll a,b;
    cin>>a>>b;

    ll A=a,B=b;

    vector<int> aa(30,0),bb(30,0);
    int i=0;
    while(a!=0 || b!=0){

        int f=a%2;
        int s=b%2;
        a/=2;b/=2;
        aa[i]=f;
        bb[i]=s;
        i++;

    }

    reverse(aa.begin(),aa.end());
    reverse(bb.begin(),bb.end());


    vector<int> c(30,0);

    bool f=false;

    for (int i = 0; i < 30; i++)
    {

        if(aa[i]!=bb[i]){
            if(!f){
                f=true;
                c[i] = bb[i];
            }
            else{
                c[i] = aa[i];
            }
        }
    }

    ll res =0;

    for (int i = 0; i < 30; i++) {
        res = res*2 + c[i];
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