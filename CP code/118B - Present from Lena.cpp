#include<bits/stdc++.h>
using namespace std;
 
int main()
 
{
 
    int n;
    cin>>n;
 
    int k =2;
 
    int flag =0;
    int f= (n-1);
 
    int endi = 0;
    for(int i=0; i<(2*n )+1 ; i++)
    {
 
        if(i>n)
        {
 
            flag=1;
        }
 
        if(flag==1)
        {
 
            i=f;
            f--;
        }
        k=2;
 
 
        for(int k=n-1; k>=i; k--)
        {
 
            cout<<"  ";
        }
 
 
        for(int j=0; j< (2*i)+1; j++)
        {
 
 
            if(j<=i)
            {
 
                     if(i==0){
                    cout<<j;
                     }else
                     {
                      cout<<j<<" ";
                     }
 
 
 
 
            }
            else
            {
 
                if((j-k)==0)
                {
                    cout<<(j-k);
                    k=k+2;
 
                }
                else
                {
 
                    cout<<(j-k)<<" ";
                    k=k+2;
 
                }
 
            }
 
        }
 
 
 
        cout<<endl;
        endi++;
        if(endi== (2*n )+1)
        {
            return 0;
        }
 
 
    }
 
    cout<<endl;
 
 
}
