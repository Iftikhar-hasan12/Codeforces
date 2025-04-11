
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>gr1;
    for(int i=0; i<n; i++)
    {

        int val;
        cin>>val;
        gr1.push_back(val);
    }
    int m;
    cin>>m;
    vector<int>gr2;
    for(int i=0; i<m; i++)
    {

        int val;
        cin>>val;
        gr2.push_back(val);
    }


    int rat =0;
    vector<int>res;
    int maxi=0;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            rat = gr2[j] / gr1[i];


            if((gr2[j] % gr1[i])==0)
                 {
                     //   cout<< gr2[j] <<" / "<<gr1[i] << "  =  "<<rat<<endl;

                 res.push_back(rat);
                 }

           if(rat>maxi && (gr2[j] % gr1[i])==0)
           {
               maxi= rat;
           }



       }
   }

//cout<<"Maxi : " <<maxi<<endl;
   int cnt=0;

   for(int i=0; i<res.size(); i++)
   {
       if(maxi==res[i])
       {
           cnt++;
       }

   }


   cout<<cnt<<endl;




}
