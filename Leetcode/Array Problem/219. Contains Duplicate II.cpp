struct TowerData
{
    int a, b;
};
bool comp(const TowerData &x, const TowerData &y)
{
    return x.a<y.a;
}

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<TowerData>ar;
        for(int i=0; i<n; i++)
        {
            ar.push_back({nums[i],i});

        }
        sort(ar.begin(),ar.end(),comp);

        for(int i=0; i<n; i++)
        {
            if(ar[i].a ==ar[i+1].a && ar[i].b!=ar[i+1].b && abs(ar[i].b-ar[i+1].b)<=k)
            {
                return true;
            }
        }
        return false;

    }



};
