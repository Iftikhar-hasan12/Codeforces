#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;

   int k =n.size();
   int flag=0;

    for(int i=0; i<k; i++)
    {
        if(n[i]== '1' && n[i+1] =='4' && n[i+2] == '4' && i!= k-1 && i!=k-2)
        {

            flag=1;

            i=i+2;

        }
        else if(n[i]== '1' && n[i+1] =='4' && i!=k-1 )
        {

            flag=1;

            i=i+1;

        }
        else if(n[i]== '1')
        {

            flag=1;
        }
        else
        {


            flag=0;
            break;
        }
    }


    if(flag==1){

        cout<<"YES"<<endl;
    }else {

    cout<<"NO"<<endl;
    }


}
