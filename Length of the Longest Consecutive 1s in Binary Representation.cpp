/*
Suggestion TAKE PAPER AND PEN AND THEN CODE IT.CRACK IT INTO SMALL PART.
Question:-
Given a number n, find length of the longest consecutive 1s in its binary representation.
Examples:
Input : n = 14
Output : 3
The binary representation of 14 is 1110.
Input : n = 222
Output : 4
The binary representation of 222 is 11011110.
---------------------------------------------------------------------------------------------------------------------------
SOLUTION
Naive Approach: One simple way would be to simply loop over the bits, and keep track of the number of consecutive set bits,
and the maximum that this value has reached. In this approach, we need to convert it to binary (base-2) representation and
then find and print the result.
Using Bit Magic: The idea is based on the concept that if we AND a bit sequence with a shifted version of itself,
we’re effectively removing the trailing 1 from every sequence of consecutive 1s.
      11101111   (x)
    & 11011110   (x << 1)
    ----------
      11001110   (x & (x << 1)) 
        ^    ^
        |    |
   trailing 1 removed
So the operation x = (x & (x << 1)) reduces length of every sequence of 1s by one in binary representation of x.
If we keep doing this operation in a loop, we end up with x = 0.
The number of iterations required to reach 0 is actually length of the longest consecutive sequence of 1s.
*/
// C++ program to find length of the longest
// consecutive 1s in binary reprsentation of
// a number.
#include<bits/stdc++.h>
using namespace std;
 
int maxConsecutiveOnes(int x)
{
    // Initialize result
    int count = 0;
 
    // Count the number of iterations to
    // reach x = 0.
    while (x!=0)                                   //or u can write while(x)
    {
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));
 
        count++;
    }
 
    return count;
}
 
// Driver code
int main()
{
    cout << maxConsecutiveOnes(14) << endl;
    cout << maxConsecutiveOnes(222) << endl;
    return 0;
}