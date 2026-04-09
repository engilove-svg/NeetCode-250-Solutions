class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
           int need =target-nums[i];
           if(m.find(need)!=m.end()){//check if this is in map
               return {m[need],i};//return the indices or result
           }
           m[nums[i]]=i;//otherwise store this element in map
        }
        return {};
    }
};
