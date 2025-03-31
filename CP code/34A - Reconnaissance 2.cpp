
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int> ar;

    for(int i=0; i<n; i++)
    {

        int val;
        cin>>val;
        ar.push_back(val);

    }

    int mini = abs(ar[0] - ar[1]);
    int lb,hb;

    for(int i=0; i<n; i++)
    {
        if( mini >= abs(ar[i] - ar[i+1])  && i!= n-1)
        {
            mini = abs(ar[i] - ar[i+1]);
            lb = i+1;
            hb = i+2;

//            cout<< ar[i] << " "<< ar[i+1];
//            cout<<" (ar[i] - ar[i+1]) : "<<(ar[i] - ar[i+1])<<endl;
//

        }
        else if(mini>= abs(ar[i] - ar[0])  && i== n-1)
        {
             mini = abs(ar[i] - ar[0]);



//             cout<<ar[i] <<" "<< ar[0]<<endl;
//            cout<<" (ar[i] - ar[i+1]) : "<<(ar[i] - ar[0])<<endl;

            lb = i+1;
            hb = 1;

        }


    }



    cout<<lb<<" "<<hb<<endl;


}


