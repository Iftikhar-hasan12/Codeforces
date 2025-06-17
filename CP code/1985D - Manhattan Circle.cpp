#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
   // int mat[n][m];

     vector<vector<char>> mat(n, vector<char>(m));

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            cin>> mat[i][j];
        }

    }





    int dot,cnt,row,col,temp=0;
    for(int i=0; i<n; i++)
    {
        dot =0;
        cnt=0;
        for(int j=0; j<m; j++)
        {
            if(mat[i][j]=='.')
            {
                dot++;
            }

            else if(mat[i][j]=='#')
            {
                cnt++;

            }

            if(cnt>temp)
            {
                temp=cnt;

                row = i;
                col = (cnt/2) +dot;

            }



        }
    }



    cout<<row+1<<" "<<col+1<<endl;




}



}
