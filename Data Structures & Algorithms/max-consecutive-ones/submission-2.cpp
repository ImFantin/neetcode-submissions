class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, longest = 0;


        for (int n : nums) {
            if (n == 0) {
                longest = max(longest,count);
                count = 0;
            } else {
                count++;
            }
        }

        return max(longest, count);
    }
};