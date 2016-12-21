/*
Question:-
---------------------------------------------------------------------------------------------------------------------------
Equal Sum and XOR
Given a positive integer n, find count of positive integers i such that 0 <= i <= n and n+i = n^i
Input  : n = 7
Output : 1
Explanation:
7^i = 7+i holds only for only for i = 0
7+0 = 7^0 = 7
Input n = 12
Output: 4
12^i = 12+i hold only for i = 0, 1, 2, 3
for i=0, 12+0 = 12^0 = 12
for i=1, 12+1 = 12^1 = 13
for i=2, 12+2 = 12^2 = 14
for i=3, 12+3 = 12^3 = 15
-----------------------------------------------------------------------------------------------------------------------------
*/
Solution:-

Method 1 (Simple) :

One simple solution is to iterate over all values of i 0<= i <= n and count all satisfying values.
/* C++ program to print count of values such
   that n+i = n^i */
#include <iostream>
using namespace std;
 
// function to count number of values less than
// equal to n that satisfy the given condition
int countValues (int n)
{
    int countV = 0;
 
    // Traverse all numbers from 0 to n and
    // increment result only when given condition
    // is satisfied.
    for (int i=0; i<=n; i++ )
        if ((n+i) == (n^i) )
            countV++;
 
    return countV;
}
 
// Driver program
int main()
{
    int n = 12;
    cout << countValues(n);
    return 0;
}

Method 2 (Efficient) :

An efficient solution is as follows
Since we know a + b = a ^ b + a & b

We can write, n + i = n ^ i + n & i

So n + i = n ^ i implies n & i = 0

Hence our problem reduces to finding values of i such that n & i = 0.
How to find count of such pairs? We can use the count of unset-bits in the binary representation of n.
For n & i to be zero, i must unset all set-bits of n.
If the kth bit is set at a particular in n, kth bit in i must be 0 always, else kth bit of i can be 0 or 1

Hence, total such combinations are 2^(count of unset bits in n)

For example, consider n = 12 (Binary representation : 1 1 0 0).
All possible values of i that can unset all bits of n are 0 0 0/1 0/1 where 0/1 implies either 0 or 1.
Number of such values of i are 2^2 = 4.

#include <iostream>
typedef long long int ll;
using namespace std;
int countValue(ll x)
{
	ll countbits=0;
	while(x)
	{
		if((x&1)==0)
		{
			countbits++;
		}
		x=x>>1;
	}
	return (1<<countbits);
 
}
 
int main() {
	ll n;
	cout<<"Entre the number "<<"\n";
	cin>>n;
	cout<<"Result is :- "<<countValue(n);
	return 0;
}
