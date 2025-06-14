#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, c ;
   cin>>n>>c;
   int score[n];
   int time[n];
   for(int i=0; i<n; i++)
   {
       cin>>score[i];
   }
  int tm=0,sc=0, sum_limak=0;

// Only for Limak
   for(int i=0; i<n; i++)
   {
       cin>>time[i];
       tm+=time[i];
       sc = max(0,score[i] - (c* tm));
       sum_limak +=sc;
   }

   // only for Radee
   int sum_rade=0, tm2=0;

      for(int i=n-1; i>=0; i--)
   {
       tm2+=time[i];

       sum_rade  +=max(0,score[i] - (c* tm2));

   }





 cout<<((sum_limak>sum_rade)? "Limak":( (sum_limak==sum_rade)?"Tie":  "Radewoosh"  ) )<<endl;





}
