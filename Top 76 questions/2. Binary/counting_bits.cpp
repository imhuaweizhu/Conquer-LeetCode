#include <vector>
#include <iostream>
using namespace std;

/*
LeetCode #338
Counting Bits

***********
*/

vector<int> solution(int num)
{
    vector<int> result;
    // i=0, num_of_1 = 0.
    result.push_back(0);
    // i=1, num_of_1 = 1.
    result.push_back(1);
    // 4 has the same number of 1s as 2 in their binary representation, because 4/2=2. The same for 8, because 8/4=2;
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            result.push_back(result[i / 2]);
        }

        if (i % 2 == 1)
        {
            result.push_back(result[i / 2] + 1);
        }
    }

    return result;
}

int main()
{
    int a = 7;
    vector<int> result = solution(a);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    //cout<<result<<"\n";

    cout << "\n";
    return 0;
}
