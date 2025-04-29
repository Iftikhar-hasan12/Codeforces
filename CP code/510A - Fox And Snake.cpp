#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int k=1;

    int flag=1;


    for(int row =1; row<=n; row++)
    {

        for(int col=1; col<=m; col++)
        {
            if(row%2==0)
            {
                if(col==m && k==1)
                {
                    cout<<"#";
                    flag=0;
                }
                else  if(col==1 && k==0)
                {
                    cout<<"#";
                    flag=1;
                }
                else
                {

                    cout<<".";
                }



            }
            else
            {

                cout<<"#";

            }


        }
        if(flag==1)
        {
            k=1;
        }
        else
        {
            k=0;
        }
        cout<<endl;
    }

}
