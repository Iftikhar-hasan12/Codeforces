class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n= nums.size();
        int target=0;
        sort(nums.begin(), nums.end());
        vector<vector<int>>mat;
        for(int i=0; i<n-1; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }

           int left=i+1;
           int  right =n-1;

            while(left<right)
            {
                int sum = nums[i]+ nums[left]+nums[right];
                if(sum==0)
                {

                    mat.push_back({nums[i],nums[left],nums[right]});

                    while(left<right && nums[left]==nums[left+1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;

                }else if( sum > 0)
                {
                    right--;


                }else{

                left++;

                }





            }




        }
        return mat;

    }
};
