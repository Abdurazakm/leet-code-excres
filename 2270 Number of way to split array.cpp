#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long total_sum = 0;
        int n = nums.size();
        long left_sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            total_sum += nums[i];
        }
        
        for (int i = 0; i < n - 1; i++) {
            left_sum += nums[i];
            long right_sum = total_sum - left_sum;  // Use long here
            if (left_sum >= right_sum) {
                count++;
            }
        }
        return count;
    }
};


int main(){
    
    return 0;
}