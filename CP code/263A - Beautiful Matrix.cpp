#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 
    vector<vector<int>> mat(5, vector<int>(5));
    int val;
    int rs,cs;
    for(int i=0; i<5; i++)
    {
 
        for(int j=0; j<5; j++)
        {
 
            cin>>val;
 
            mat[i][j]=val;
            if(val==1)
            {
                rs = i;
                cs=j;
            }
 
        }
    }
 
    int sum = abs(rs-2) + abs(cs-2);
    cout<<sum<<endl;
 
 
 
 
 
}
