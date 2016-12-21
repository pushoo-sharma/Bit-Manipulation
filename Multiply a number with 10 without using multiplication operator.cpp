/*
QUESTION
Given a number, the task is to multiply it with 10 without using multiplication operator?
Examples:
Input : n = 50
Output: 500
// multiplication of 50 with 10 is = 500
Input : n = 16
Output: 160
// multiplication of 16 with 10 is = 160
----------------------------------------------------------------------------------------------------------------------------
SOLUTION
A simple solution for this problem is to run a loop and add n with itself 10 times. Here we need to perform 10 operations.
A better solution is to use bit manipulation.
We have to multiply n with 10 i.e; n*10, we can write this as n*(2+8) = n*2 + n*8 and
since we are not allowed to use multiplication operator we can do this using left shift bitwise operator.
So n*10 = n<<1 + n<<3.
*/
#include <iostream>
typedef long long int ll;
using namespace std;
int multiplyByTen(ll n)
{
	return ((n<<1)+(n<<3));
}
int main() {
	int number; 
	cout<<"Entre the number to be multiplied by 10 without using * operator\n";
	cin>>number;
	cout<<"Result is :- "<<multiplyByTen(number);
	return 0;
}
