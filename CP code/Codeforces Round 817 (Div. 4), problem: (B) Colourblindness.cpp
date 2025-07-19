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


void solve()
{
    int n;
    cin>>n;
    char mat[2][n];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            char tem;
            cin>>tem;
            if(tem=='B')
            {

                mat[i][j]='G';
            }else
            {
                mat[i][j]=tem;

            }

        }
    }
    int flag =1;


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mat[0][j]!=mat[1][j])
            {
                flag=0;
            }


        }
    }


    if(flag==1)
    {
        cout<<"YES"<<endl;
    }else
    {

        cout<<"NO"<<endl;
    }

}
