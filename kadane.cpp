#include <iostream>
#include <climits>
#include <algorithm> 

using namespace std;

void kadane_algo(int n, int arr[]) {
    int max_so_far = INT_MIN;
    int current_max = 0;

    for (int i = 0; i < n; i++) {
        current_max += arr[i];
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
        if (current_max < 0) {
            current_max = 0;
        }
    }

    cout << "Max subarray sum: " << max_so_far << endl;
}

int main() {
    int n = 5;
    int arr[10] = {-2, -3, 4, -1, -2, 1, 5, -3};
    kadane_algo(n, arr); 

    int arr2[5] = {1,2,3,4,5};
    kadane_algo(n,arr2); 

    return 0;
}