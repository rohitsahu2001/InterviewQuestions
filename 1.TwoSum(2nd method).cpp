class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(m.find(target-x)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[target-x]);
                break;
            }
            m[x]=i;
        }
        return ans;
    }
};
