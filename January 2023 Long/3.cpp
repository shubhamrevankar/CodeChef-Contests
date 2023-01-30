#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int dis1 = x1*x1 + y1*y1;
	    int dis2 = x2*x2 + y2*y2;
	    if(dis1>dis2){
	        cout<<"ALEX"<<endl;
	    }
	    else if(dis1<dis2){
	        cout<<"BOB"<<endl;
	    }
	    else{
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}