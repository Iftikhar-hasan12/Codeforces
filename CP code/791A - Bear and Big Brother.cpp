#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a, b;
    cin>>a>>b;

    int i=1;
   while(true){
        a = a*3;
        b = b*2;
        if(a>b)
        {

            cout<<i<<endl;
            return 0;
        }
        i++;


    }

}
