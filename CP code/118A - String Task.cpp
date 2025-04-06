#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    vector<char>ch;

    for(int i=0; i<s.size(); i++)
    {

        if(s[i] != 'A' && s[i] != 'a'   &&s[i] != 'e'&&s[i] != 'E'   && s[i] != 'I' &&s[i] != 'i'   && s[i] != 'O' &&s[i] != 'o' &&  s[i] != 'U' &&s[i] != 'u'  && s[i] != 'Y' &&s[i] != 'y'  )
        {
            ch.push_back('.');

            char val = tolower(s[i]);
            ch.push_back(val);
        }

    }



    for(int i=0; i<ch.size(); i++)
    {
         // if(i)
        cout<<ch[i];
    }

cout<<endl;

}
