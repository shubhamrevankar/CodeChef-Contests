#include <bits/stdc++.h>
using namespace std;





void solve(){

    long long n;
    cin>>n;
    string s;
    cin>>s;

    long long ones =0;
    for(auto x:s){
        if(x=='1') ones++;
    }

    if(ones>3){
        cout<<"NO"<<endl;
        return;
    }

    if(s.length()<3){
        if(ones == 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }

    cout<<"YES"<<endl;

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