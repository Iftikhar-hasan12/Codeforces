#include<bits/stdc++.h>
using namespace std;
int main()
{


        int n,m;
        n=3,m=3;



        vector<vector<int>> mat(n, vector<int>(m));
        vector<vector<int>> ans(n, vector<int>(m));

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                int val;
                cin>>val;
                mat[i][j] = ((val%2==0)?0:1);
            }

        }


        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {

                ans[i][j]=1;
            }

        }

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {

                if(mat[i][j]==1)
                {
                    ans[i][j] = ((ans[i][j]==1 )?0:1) ;

                    if(j-1>=0 )
                    {
                        ans[i][j-1] = ((ans[i][j-1]==1 )?0:1) ;

                    }



                    if(j+1<n )
                    {
                        ans[i][j+1] = ((ans[i][j+1]==1 )?0:1) ;
                    }



                    if(i-1>=0 )
                    {
                        ans[i-1][j] = ((ans[i-1][j]==1 )?0:1) ;
                    }

                    if(i+1<n )
                    {
                        ans[i+1][j] = ((ans[i+1][j]==1 )?0:1) ;

                    }



                }



            }

        }

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                cout<<ans[i][j];
            }
            cout<<endl;

        }
    }
