
#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;

    cin >> n;

    if(n>30)
    {
        cout<<n<<" "<<0<<" "<<0<<endl;
        return 0;
    }


    long long a = 0, b = 1, next;
    vector<int> ar;
    ar.push_back(a);
    ar.push_back(b);


    for (int i = 2; i < n+1; i++)
    {
        next = a + b;
        ar.push_back(next);
        a = b;
        b = next;
    }




//cout<<" print :  ";
//for(int i=0; i<n+1; i++)
//{
//    cout<<ar[i]<< " ";
//}
//cout<<endl;
//




    int sum =0;
    //n= n+1;
    for(int i=n; i>=0; i--)
    {
        for(int j=n; j>=0; j--)
        {

            for(int k=n; k>=0; k--)
            {

                sum = ar[i] +ar[j] + ar[k];
                if(sum==n)
                {
                    cout<<ar[i]<<" "<<ar[j]<<" "<<ar[k]<<endl;
                    return 0;
                }


            }

        }


    }



    cout<<"I'm too stupid to solve this problem"<<endl;
}
