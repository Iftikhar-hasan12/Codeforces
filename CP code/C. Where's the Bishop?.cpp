#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
 
 
}
void solve(){
    char mat[8][8];
 
 
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
 
 
 
            cin>>mat[i][j];
        }
    }
 
 
 
    int cnt =0;
    int next =0;
    int row=0,col=0;
 
 int prev =0;
 
    for(int i=0; i<7; i++)
    {
        next =0, cnt=0;
        for(int j=0; j<7; j++)
        {
 
            if(mat[i+1][j-1]=='#' && mat[i-1][j-1]=='#' && mat[i+1][j+1]=='#' && mat[i-1][j+1]=='#' && i>0 && j<7 )
            {
                col =j;
                row=i;
            }
 
 
 
 
        }
    }
 
    cout<<(row+1)<<" "<<(col+1)<<endl;
 
 
}
