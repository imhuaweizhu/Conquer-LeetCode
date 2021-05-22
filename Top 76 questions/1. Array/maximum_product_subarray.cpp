
#include <vector>
#include <iostream>
#include <algorithm> // for std::min(), std::max()
using namespace std;

/*
LeetCode #11
maximum product subarray

***********
Brute force solution, Complexity is O(N^2):

***********
A better solution with O(N) Complexity:

Suppose the length of the array is N.

1. You can get the maximum product by multiplying the current element with the maximum product calculated so far. (might work when current element is positive).
2. You can get the maximum product by multiplying the current element with minimum product calculated so far. (might work when current element is negative).
3. The current element might be a starting position for maximum product subarray.

so looks like we need to keep track of both current_min and current_min of subarrays.

And we're gonna do it in a bottom-up pattern dynamic programming.
*/

int solution(vector<int> arr)
{
    int result = arr[0];
    int min_i = arr[0];
    int max_i = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            swap(min_i, max_i);
        }
        max_i = max(arr[i], max_i * arr[i]);
        min_i = min(arr[i], min_i * arr[i]);
        result = max(result, max_i);

        cout << "i=" << i << ", max_i=" << max_i << ", min_i=" << min_i << ", result=" << result << "\n\n";
    }
    return result;
}

int main()
{
    vector<int> test_arr = {-2, 0, -7};
    int result = solution(test_arr);
    cout << result;
    cout << "\n";
    return 0;
}
