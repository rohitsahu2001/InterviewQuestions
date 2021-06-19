class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            auto it=m.find(target-nums[i]);
            if(it!=m.end()&&m[target-nums[i]]!=i){
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
                break;
            }
        }
        return v;
    }
};
