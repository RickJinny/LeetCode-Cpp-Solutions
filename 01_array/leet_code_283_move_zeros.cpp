//
// Created by Jinny on 2020/4/1.
//

#include "leet_code_283_move_zeros.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nonZeroElements;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                nonZeroElements.push_back(nums[i]);
            }
        }

        for (int j = 0; j < nonZeroElements.size(); j++) {
            nums[j] = nonZeroElements[j];
        }

        for (int k = nonZeroElements.size(); k < nums.size(); k++) {
            nums[i] = 0;
        }
    }
};

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
    Solution().moveZeroes(vec);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i]<<" ",
    }
    cout << endl;
    return 0;
}
