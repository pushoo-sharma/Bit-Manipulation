/*
Multiples of 4 (An Interesting Method)

Given a number n, the task is to check whether this number is a multiple of 4 or not without using +, -, * ,/ and % operators.

Examples:

Input: n = 4  Output - Yes
       n = 20 Output - Yes
       n = 19 Output - No
-------------------------------------------------------------------------------------------------------------------------------
Method 1 (Using XOR)

An interesting fact for n > 1 is, we do XOR of all numbers from 1 to n and if the result is equal to n, then n is a multiple of 4 else not.
// An interesting XOR based method to check if
// a number is multiple of 4.
*/
#include<bits/stdc++.h>
using namespace std;
 
// Returns true if n is a multiple of 4.
bool isMultipleOf4(int n)
{
    if (n == 1)
       return false;
 
    // Find XOR of all numbers from 1 to n
    int XOR = 0;
    for (int i = 1; i <= n; i++)
        XOR = XOR ^ i;
 
    // If XOR is equal n, then return true
    return (XOR == n);
}
 
// Driver code to print multiples of 4
int main()
{
    // Printing multiples of 4 using above method
    for (int n=0; n<=42; n++)
       if (isMultipleOf4(n))
         cout << n << " ";
    return 0;
 }
How does this work?
When we do XOR of numbers, we get 0 as XOR value just before a multiple of 4. This keeps repeating before every multiple of 4.

Number Binary-Repr  XOR-from-1-to-n
1         1           [0001]
2        10           [0011]
3        11           [0000]
----------------------------------------------------------------------------------------------------------------------------------
 Method 2 (Using Bitwise Shift Operators)
 
 The idea is to remove last two bits using >>, then multiply with 4 using <<.
 If final result is same as n, then last two bits were 0, hence number was a multiple of four.
 
 LOOK AT THIS:-
 As we can see that the main idea to find multiplicity of 4 is to check the least two significant bits of the given number.
 We know that for any even number, the least significant bit is always ZERO (i.e. 0).
 Similarly, for any number which is multiple of 4 will have least two significant bits as ZERO.
 And with the same logic, for any number to be multiple of 8, least three significant bits will be ZERO.
 That’s why we can use AND operator (&) as well with other operand as 0x3 to find multiplicity of 4.
 
 #include <iostream>
typedef long long int ll;
using namespace std;
int checkWhetherMutipleOffour(ll n)
{
	return (((n>>2)<<2)==n);
}
 
int main() {
    ll number;
    cin>>number;
    cout<<"Entre the number to find the multiple of 4\n";
    for(ll i=1;i<=number;i++)
    {
    	if(checkWhetherMutipleOffour(i))
    	cout<<i<<" \n";
    }
    cout <<" these are the multiple of 4\n";
	return 0;
}

    
