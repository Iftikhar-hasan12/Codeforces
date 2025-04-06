#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long  int  n,m;
    cin>>n>>m;
    vector< long long  int >ar;

    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        ar.push_back(val);


    }
    int k=0;
 long long  int  dis =0;
   long long  int  tem ;

  long long  int  res;

    for( long long  int  i=1; i!=0; i++)
    {


   tem = ar[k];

   k++;
   res = tem - i;

//   cout<< " tem : "<<tem << " -- res :" <<res << " -- i : "<< i <<endl;

     i = tem-1;
   if( res >= 0 )
   {
       dis = dis + res;
   }else {

   dis = dis + (n + res) ;


   }








    //-------------------------



        if(k==m)
        {

            break;
        }


    }

cout<<dis<<endl;



}
