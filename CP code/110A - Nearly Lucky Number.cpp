#include<bits/stdc++.h>
using namespace std;





int main()
{

   long long int n;
   cin>>n;

   int a[10] = {0};

   for(long long int i=n; i!=0; i/=10)
   {
       int rem = i%10;

       a[rem]+=1;
   }

   int sum = a[4] + a[7];

   if(sum == 4 || sum== 7)
   {

       cout<<"YES"<<endl;
   }else {

   cout<<"NO"<< endl;
   }




}








