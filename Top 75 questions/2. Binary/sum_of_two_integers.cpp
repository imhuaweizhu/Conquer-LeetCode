#include <iostream>
using namespace std;

/*
LeetCode #371
Sum of Two Integers

***********
*/

int solution(int a, int b)
{
    int result;
    // xor operator in c++
    int sum_without_carry = a ^ b;
    // && is logical "and"
    // & is bitwise "and".
    // << is bitwise left-shift
    int carry = (a & b) << 1;
    // Because the sum_without_carry + carry may still have a carry.
    // Therefore we keep doing the same thing as the two steps above utill there is no carry
    while (carry != 0)
    {
        // save the sum_without_carry in a temporary variable because we need to use it in calculating "carry" before it's updated.
        int tmp = sum_without_carry;
        sum_without_carry = sum_without_carry ^ carry;
        carry = (tmp & carry) << 1;
    }
    result = sum_without_carry + carry;

    return result;
}

int main()
{
    int a = 2;
    int b = 15;
    int result = solution(a, b);
    cout << result;
    cout << "\n";
    return 0;
}
