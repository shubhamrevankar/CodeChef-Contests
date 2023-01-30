#include <bits/stdc++.h>
using namespace std;





void solve(){

    long long n;
    cin>>n;
    string s;
    cin>>s;

    long long mx=0;
    if(s[0]=='1'){
        long long i=0;
        while(i<n && s[i]=='1') i++;
        long long incr = i;
        long long count=0;

        for(;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                mx = max(mx,count);
                count=0;
            }
        }
        mx = max(mx,count);
        mx += incr;

    }
    else{

        
        long long count=0;

        for(long long i=1;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                mx = max(mx,count);
                count=0;
            }
        }
        mx = max(mx,count);
    }

    cout<<mx<<endl;


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