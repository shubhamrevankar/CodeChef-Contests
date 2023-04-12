#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {


    vector<vector<int>> mat(10,vector<int>(10,0));

    mat[0][1]=mat[1][0]=4;
    mat[0][2]=mat[2][0]=3;
    mat[0][3]=mat[3][0]=3;
    mat[0][4]=mat[4][0]=4;
    mat[0][5]=mat[5][0]=3;
    mat[0][6]=mat[6][0]=2;
    mat[0][7]=mat[7][0]=3;
    mat[0][8]=mat[8][0]=1;
    mat[0][9]=mat[9][0]=2;

    mat[1][2]=mat[2][1]=5;
    mat[1][3]=mat[3][1]=3;
    mat[1][4]=mat[4][1]=2;
    mat[1][5]=mat[5][1]=5;
    mat[1][6]=mat[6][1]=6;
    mat[1][7]=mat[7][1]=1;
    mat[1][8]=mat[8][1]=5;
    mat[1][9]=mat[9][1]=4;

    mat[2][3]=mat[3][2]=2;
    mat[2][4]=mat[4][2]=5;
    mat[2][5]=mat[5][2]=4;
    mat[2][6]=mat[6][2]=3;
    mat[2][7]=mat[7][2]=4;
    mat[2][8]=mat[8][2]=2;
    mat[2][9]=mat[9][2]=3;

    mat[3][4]=mat[4][3]=3;
    mat[3][5]=mat[5][3]=2;
    mat[3][6]=mat[6][3]=3;
    mat[3][7]=mat[7][3]=2;
    mat[3][8]=mat[8][3]=2;
    mat[3][9]=mat[9][3]=1;

    mat[4][5]=mat[5][4]=3;
    mat[4][6]=mat[6][4]=4;
    mat[4][7]=mat[7][4]=3;
    mat[4][8]=mat[8][4]=3;
    mat[4][9]=mat[9][4]=2;

    mat[5][6]=mat[6][5]=1;
    mat[5][7]=mat[7][5]=4;
    mat[5][8]=mat[8][5]=2;
    mat[5][9]=mat[9][5]=1;

    mat[6][7]=mat[7][6]=5;
    mat[6][8]=mat[8][6]=1;
    mat[6][9]=mat[9][6]=2;

    mat[7][8]=mat[8][7]=4;
    mat[7][9]=mat[9][7]=3;
    
    mat[8][9]=mat[9][8]=1;









	long long t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<mat[a][b]<<endl;

    }
    
	return 0;
}