#include<bits/stdc++.h>
using namespace std;
int check ( int n);
int main()
{

    int n;
    cin>>n;



    for(int i = n+1 ; i!= 0; i++)
    {
        if(check(i) == 1)
        {
            cout<<i << endl;
            break;

        }


    }




}



int check ( int n)
{

  int ar [10] = {0};

    for(int i=n; i!= 0; i = i/10)
    {

        int rem = i % 10;
       ar[rem] +=1;
    }
    for(int i=0; i<10; i++)
    {
        if(ar[i] >1 )
        {
            return 0;

        }

    }

    return 1;



}


