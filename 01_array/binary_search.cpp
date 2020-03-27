

#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>

using namespace std;

template<typename T>
int binarySearch(T arr[], int n, T target) {
    // 在 [l ... r] 的范围里寻找 target
    int left = 0, right = n - 1;
    // 当 l == r, 在区间 [l ... r] 依然是有效的
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            left = mid + 1; // target 在 [mid+1 ... r] 中
        } else {
            right = mid - 1; // target 在 [l ... mid-1]
        }
    }

    return -1;
}

int main() {

}
