class Solution
{
public:
    int thirdMax(vector<int>& nums)
    {


        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        reverse(nums.begin(),nums.end());
        int n=nums.size();
        return ( n>=3)?nums[2]:nums[0];


    }
};
