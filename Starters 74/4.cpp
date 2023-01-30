#include <bits/stdc++.h>
using namespace std;





void solve(){


long long n;
cin>>n;
vector<long long> arr(n);
bool is_zero = false;
for(auto &x:arr){
    cin>>x;
    if(x==0) is_zero = true;
}
if(is_zero){
    cout<<"-1"<<endl;
    return;
}


sort(arr.begin(),arr.end());

long long res=-1;
if(arr[0]>0){
    res = max(res,arr[0]-1);
}
if(arr[n-1]<0){
    res = max(res,-(arr[n-1]+1));
}
if(arr[0]<0 && arr[n-1]>0){
    long long i=0;
    for(;i<n-1;i++){
        if(arr[i]<0 && arr[i+1]>0) break;
    }
    long long temp = min(-arr[i]-1,arr[i+1]-1);
    res = max(res,temp);
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