#include <iostream>
#include <vector>
using namespace std;
//this leet code question
class Solution {
public:
    long long minEnd(int n, int x) {
        vector<int> nums;
        nums.push_back(x);
        
        for (int i = 1; i < n; i++) {
            int next_num = nums[i - 1] + 1;
            while ((nums[0] & next_num) != x) {
                ++next_num;
            }
            nums.push_back(next_num);
        }
        return nums[n - 1];
    }
};

int main() {
    int n, x;
    cin >> n >> x;

    // Create an object of the Solution class
    Solution solution;
    
    // Call the minEnd function using the object
    cout << solution.minEnd(n, x) << endl;

    return 0;
}
