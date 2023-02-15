#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    if(n==1){
        if(s[0]=='0'){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        return;
    }
    ll i = 0;

    while(i<n && s[i]=='0') i++;

    if(i==n){
        cout<<n<<endl;
        return;
    }

    char op = s[i];

    ll res=0, c=0;

    for(ll j=i;j<n;j++){
        if(s[j]!='0'){
            if(s[j]==op){
                c=0;
            }
            else{
                if(c%2==1){
                    res++;
                }
                c=0;
                op = s[j];
            }
        }
        else{
            c++;
        }
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