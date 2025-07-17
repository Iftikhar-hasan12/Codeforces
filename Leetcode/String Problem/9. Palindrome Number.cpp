class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        string s2 = to_string(x);

        reverse(s.begin(), s.end());
        if(s==s2)return true;
        return false;

    }
};
