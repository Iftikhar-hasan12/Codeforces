#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a,b;

    cin>>a>>b;
    int k=0,res=0;
    while(true)
    {
        if(a > 0 && b > 0)
        {

            a--;
            b--;
            k++;
        }else
        {
            res = (a+b) /2  ;
            break;


        }

    }

    cout<<k<<" "<<res<<endl;

}
