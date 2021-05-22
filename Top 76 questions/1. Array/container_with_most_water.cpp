#include <vector>
#include <iostream>
using namespace std;

/*
LeetCode #11
Container with most water

***********
Brute force solution, Complexity is O(N^2):

for (left=0;left<len(arr);left++){
  right=left+1;
  right=left+2;
  ...
  right =len-1;
  calculate the area, get the max_area.
}

***********
A better solution with O(N) Complexity:

1. We think two-pointers technique is a possible solution.
2. Should we let left and right pointers going to the same direction or opposite directions?
3. Width and height determine the area, so we want to width to be as large as possible, and so for the height.
4. Thus at the begining, we let the left_index =0 and right_index = len-1. so the width is the biggest at the beginning. The two pointers are gonna move in opposite directions.
5. The limitation for the height comes from the shorter bar. Therefore, we update the left and right indices based on which one has a short bar.
*/

int solution(vector<int> arr)
{
  int left = 0, right = arr.size() - 1;
  int max_area = 0;
  int width, height;

  while (left < right)
  {
    //update the width and height
    width = right - left;
    if (arr[left] <= arr[right])
    {
      height = arr[left];
      //increase the left index by 1
      left += 1;
    }
    else
    {
      height = arr[right];
      //decrease the right index by 1
      right -= 1;
    }
    //calculate the area
    int temp_area = width * height;
    if (temp_area > max_area)
    {
      max_area = temp_area;
    }
  }
  return max_area;
}

int main()
{
  vector<int> test_arr = {1, 13, 2, 5, 12, 7};
  int result = solution(test_arr);
  cout << result;
  cout << "\n";
  return 0;
}
