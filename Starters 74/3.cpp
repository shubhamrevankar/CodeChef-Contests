#include <bits/stdc++.h>
using namespace std;





void solve(){


int n;
cin>>n;
vector<int> arr(n);
for(auto &x:arr) cin>>x;

int zeros=0;
for(int i=0;i<n;i++){
    if(arr[i]==0) zeros++;
}

if(zeros%2==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
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