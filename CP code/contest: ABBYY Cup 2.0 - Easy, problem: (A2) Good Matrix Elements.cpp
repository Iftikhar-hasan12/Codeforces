#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  mat[n][n];
    int sum=0;
    int k = n;
    k--;
    int mid = (n-1)/2;
    for(int i=0; i<n; i++ )
    {
        for(int j=0; j<n; j++)
        {
            cin>>mat[i][j];

            if(i==j)
            {
                sum+=mat[i][j];
                mat[i][j]=0;
            }
            if(j == (k-i))
            {
                sum+=mat[i][j];
                mat[i][j]=0;

            }
            if(i==mid)
            {
                sum+=mat[i][j];
                mat[i][j]=0;

            }
            if(j==mid)
            {
                sum+=mat[i][j];
                mat[i][j]=0;

            }

        }
    }
//    int k = n;
//    k--;
//    int mid = (n-1)/2;
//    for(int i=0; i<n; i++ )
//    {
//        for(int j=0; j<n; j++)
//        {
//            if(i==j)
//            {
//                sum+=mat[i][j];
//                mat[i][j]=0;
//            }
//            if(j == (k-i))
//            {
//                sum+=mat[i][j];
//                mat[i][j]=0;
//
//            }
//            if(i==mid)
//            {
//                sum+=mat[i][j];
//                mat[i][j]=0;
//
//            }
//            if(j==mid)
//            {
//                sum+=mat[i][j];
//                mat[i][j]=0;
//
//            }
//
//
//        }
//
//    }
//

    cout<<sum<<endl;

}
