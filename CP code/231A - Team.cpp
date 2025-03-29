#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<vector <int> > mat;


    for(int i =0; i<n; i++)
    {
        vector<int> row;

        for(int j=0; j<3; j++)
        {

            int val;
            cin>>val;
            row.push_back(val);
        }
        mat.push_back(row);
    }


    int sum=0;

    int k=0;

    for(int i =0; i<n; i++)
    {


        for(int j=0; j<3; j++)
        {

            sum+= mat[i][j];
        }
        if( sum >1)
        {
            k++;

        }
        sum =0;
    }


    cout<<k<<endl;



}
