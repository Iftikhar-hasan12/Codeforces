
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, m;
   cin>>n>>m;
   int cnt=0;
   int num1=0, num2=0;
   for(int i=0; i<=n; i++)
   {

       for (int j=0; j<=m; j++)
       {

           num1 = i*i + j;
           num2 = i + j* j;
           if(num1 == n && num2 == m)
           {
               cnt++;
           }

       }
   }

   cout<<cnt<<endl;


}
