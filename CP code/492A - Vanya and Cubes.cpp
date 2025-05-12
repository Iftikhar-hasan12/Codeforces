#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sum=0;
    int prev;
   for(int i=1; i<=n; i++)
   {


       for(int j=1; j<=i; j++)
       {

           sum+=j;



       }

       if(sum > n)
       {

           break;
       }
           prev = i;


   }

   cout<<prev<<endl;


}
