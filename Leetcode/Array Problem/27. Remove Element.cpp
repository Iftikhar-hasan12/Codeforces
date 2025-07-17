class Solution {
public:
   int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==val)
            {
                j++;
                nums[i]=-10;
            }

        }
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

return nums.size()-j;
    }

};
