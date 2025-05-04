#include<bits/stdc++.h>
using namespace std;
int main()

{


int n;
cin>>n;
while(n--){

        int n,m,l,r;
         cin>>n>>m>>l>>r;
          if(abs(-l) > m)
          {
              int res = 0- m;
              cout<<res <<" "<<0;


          }else {

          cout<<l<<" "<<( l+m);
          }




    cout<<endl;
}


}
