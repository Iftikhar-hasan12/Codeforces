#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t, x,y,e1,e2;
    cin>>t>>x>>y>>e1>>e2;
    string s;

    cin>>s;



//
//    If the wind blows to the east, the boat will move to (x + 1, y).
//If the wind blows to the south, the boat will move to (x, y - 1).
//If the wind blows to the west, the boat will move to (x - 1, y).
//If the wind blows to the north, the boat will move to (x, y + 1).

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='S' && y >e2)
        {
            x =x;
            y=y-1;
          //  cout<<" x = "<<x <<" Y : "<<y<<" char : "<<s[i]<<endl;
        }
        else if( s[i]=='E' && x <e1)
        {
            x =x+1;
            y =y;
           // cout<<" x = "<<x <<" Y : "<<y<<" char : "<<s[i]<<endl;
        }
        else if( s[i]=='W' && x > e1)
        {
            x= x-1;
            y=y;
       //  cout<<" x = "<<x <<" Y : "<<y<<" char : "<<s[i]<<endl;
        }
        else if( s[i]=='N' && y<e2)
        {

            x= x;
            y=y+1;

           //  cout<<" x = "<<x <<" Y : "<<y<<" char : "<<s[i]<<endl;
        }
        else
        {

            x= x;
            y=y;
            // cout<<" x = "<<x <<" Y : "<<y<<" char : "<<s[i]<<endl;

        }

        if(x==e1 && y==e2)
        {
            cout<<i+1<<endl;
            return 0;
        }

    }


    cout<<-1<<endl;

}
