#include<bits/stdc++.h>

using namespace std;

int main()
{


    int n, k, l, c, d, p, nl, np ;

    cin>> n >> k >> l >> c >> d >> p>>nl >> np;

    int t_drink , t_slice , t_salt;

    t_drink = ((k*l) / nl ) /n;
    t_slice = ((c*d)) /n;
    t_salt  = (p/np ) /n;
//    cout<< " Salt : " << p<<endl;
//
//    cout<< t_drink <<endl;
//    cout<< t_salt <<endl;
//    cout<< t_slice <<endl;



    cout<< ( (t_drink< t_slice) ? ( (t_drink < t_salt) ? t_drink : t_salt ) : (t_slice <t_salt) ?t_slice : t_salt );



}
