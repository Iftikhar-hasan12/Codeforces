#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;

    vector<vector<int> > vc;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        vector<int> ar;
        ar.push_back(i);
        ar.push_back(val);

        vc.push_back(ar);
    }


    for(int i=0; i<vc.size(); i++)
    {
        if( vc[i][1] <=m )
        {
            //pass
            vc[i][1] =0;


        }
        else
        {
            vc[i][1]-=m;
            vc.push_back(vc[i] );

        }
    }

    cout<<vc[vc.size()-1][0] +1 <<endl;


//
//    for(int i=0; i<vc.size(); i++)
//    {
//
//        if(i== vc.size()-1)
//        {
//            cout<<vc[i][0] +1 <<endl;
//            break;
//
//        }
//
//
//
//    }




}
