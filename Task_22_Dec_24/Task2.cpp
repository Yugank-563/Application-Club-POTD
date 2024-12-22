//Problem No -- 3190
//Find Minimum Operations to Make All Elements Divisible by Three

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size(), count = 0;
        for(int i=0; i<n; i++){
            if((nums[i] % 3 != 0 ) && ((nums[i] + 1) % 3 == 0) || ((nums[i] - 1) % 3 == 0)){
                count++;
            }
        }
        return count;
    }
};
