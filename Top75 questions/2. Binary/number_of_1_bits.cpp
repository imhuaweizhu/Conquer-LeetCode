#include <iostream>
using namespace std;

/*
LeetCode #191
Number of 1 Bits
*/

int solution(unsigned int a)
{
    int count = 0;
    while (a > 0)
    {
        if (a % 2 == 1)
        {
            count++;
        }
        a = (a >> 1);
    }

    return count;
}

int main()
{
    unsigned int a = 12;
    int result = solution(a);

    // for (int i=0;i<result.size();i++){
    //   cout<<result[i];
    // }
    cout << result << "\n";

    cout << "\n";
    return 0;
}
