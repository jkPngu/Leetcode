class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i< nums.size(); i++){
            int num = nums[i];
            int com = target - num;
            auto f = map.find(com);
            if(f != map.end()){
                return {f -> second, i};
            }
            map[num] = i;
        }
        return {};
    }
};
