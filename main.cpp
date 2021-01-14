#include<iostream>
#include <vector>

using namespace std;

int findLargestSumPair(vector<int> &&arr, int n) {
    int first, second;
    if (arr[0] < arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    return (first + second);
}


int main() {
    std::vector<int> arr = {220, 195, 285, 265, 175, 195, 165, 190, 195, 175, 185, 190, 195, 195, 180, 250, 195, 180};

    int result = findLargestSumPair(std::move(arr), arr.size());

    cout << result << endl;
    return 0;
}

//[110, 220, 195, 150, 285, 265, 175, 195, 165, 165, 190, 195, 175, 185, 190, 195, 195, 180, 250, 195, 180]