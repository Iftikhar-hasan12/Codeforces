#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1, s;
   getline(cin, s1);
    s = s1.substr(1, s1.length()-2);

    s.erase (remove(s.begin() , s.end(), ' ') ,s.end());
    s.erase ( remove(s.begin() , s.end(), ',') ,s.end());


    map<char , int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    cout<<freq.size()<<endl;

}
