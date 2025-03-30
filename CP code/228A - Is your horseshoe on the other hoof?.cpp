
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<long long int > ar;
   int k=0;

   for(int i=0; i<4; i++)
   {
       long long int val;
       cin>>val;
       ar.push_back(val);
   }


   sort(ar.begin() , ar.end());

   for(int i=0; i<4; i++)
   {

       if(ar[i] == ar[i+1] && i != 3 )

       {
           continue;

       }
       k++;


   }


   cout<<4-k<<endl;

}


