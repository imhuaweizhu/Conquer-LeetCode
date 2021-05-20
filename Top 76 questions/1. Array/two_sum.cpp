#include <vector>
#include <utility> // for std::pair
#include <unordered_map>
#include <iostream>
using namespace std;

/*
LeetCode #1
Two sum
*/

pair<int, int> solution(vector<int> arr, int target)
{
    // std::unordered_map is implemented as a hash table
    unordered_map<int, int> hashmap; // std::map is ordered and implemented as a red_black tree.
    // first_element + second_element = target
    // a pair to save two indices of the two matching elements in the array
    pair<int, int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        // We can always find the match in the second_element if there is any, so only one pass of the array is enough.
        int number_to_find = target - arr[i];
        auto search_result = hashmap.find(number_to_find);
        // if the target-arr[i] is found in the hash table
        if (search_result != hashmap.end())
        {
            // save the indices
            // the index for number_to_find is the first_element
            // the curretn index i is the second_element
            result = make_pair(hashmap.at(number_to_find), i);
        }
        // if NOT found, add the element to the hash table
        hashmap[arr[i]] = i; // do not use hashmap.insert, because it can have same key.
    }
    return result;
}

int main()
{
    vector<int> test_arr = {1, 3, 5, 9, 22};
    int target = 14;
    pair<int, int> result;
    result = solution(test_arr, target);
    cout << result.first << ", " << result.second << "\n";
}
