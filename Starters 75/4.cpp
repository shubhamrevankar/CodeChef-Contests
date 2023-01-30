#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;

 
long long nCr(long long n, long long r)
{
    long long res=1;
    long long r1 = r;
    long long n1 = n;
    while(r1--){
        res = (((res%MOD)*(n1--))%MOD)%MOD;
    }

    while(r--){
        res = (((res%MOD)/(n1--))%MOD)%MOD;
    }

    return res;
}


void solve(){
    
    long long n;
    cin>>n;
    string A,B;
    cin>>A;
    cin>>B;

    long long same=0,nots=0;

    for(long long i=0;i<n;i++){
        if(A[i]==B[i]) same++;
        else nots++;
    }
    if(nots%2==1){
        cout<<"0"<<endl;
        return;
    }
    long long res=1;
    if(nots!=0){
        long long no = ((nCr(nots,nots/2))%MOD)%MOD;
        res = ((res%MOD * no%MOD)%MOD)%MOD;
    }
    
    if(same!=0){
        res =  ((res%MOD << same)%MOD)%MOD;
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