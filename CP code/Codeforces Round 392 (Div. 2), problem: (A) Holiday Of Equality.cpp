#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

cin>>n;

int ar[n];

int maxi =0;

for(int i =0; i<n; i++)

{int val;

cin>>val;

ar[i] = val;

if(val>maxi)

{

maxi= val;

}



}

int sum=0;

for(int i =0; i<n; i++)

{

sum+=maxi-ar[i];



}



cout<<sum<<endl;





}
