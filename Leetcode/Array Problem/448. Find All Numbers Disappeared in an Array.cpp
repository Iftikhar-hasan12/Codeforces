void removeDuplicateDigits(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;
    for (int val : arr) {
        if (seen.find(val) == seen.end()) {
            seen.insert(val);
            result.push_back(val);
        }
    }
    arr = result;
}


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n= nums.size();
        sort(nums.begin(), nums.end());
        removeDuplicateDigits(nums);
        vector<int>ar;
//         for(int i=0; i<nums.size(); i++)
//        {
//            cout<<nums[i]<<" ";
//        }
//        cout<<endl;

        int k=0;
        for(int i=1; i<=n; i++)
        {
            if(i!=nums[k])
            {
                ar.push_back(i);
               k--;
            }
            k++;

        }

//
//        for(int i=0; i<ar.size(); i++)
//        {
//            cout<<ar[i]<<" ";
//        }
        return ar;


    }
};

