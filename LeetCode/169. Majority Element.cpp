class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int maxi=0, value;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]>maxi)
            {
                maxi=mp[nums[i]];
                 value = nums[i];
            }


        }

        return value;
    }
};
