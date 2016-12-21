QUESTION:-

Given a number n, the task is to find the XOR from 1 to n.

Examples :

Input : n = 6
Output : 7
// 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6  = 7

Input : n = 7
Output : 0
// 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6 ^ 7 = 0
*******************************************************************************
Solution:-
-------------------------------------------------------------------------------
Method 1 (Naive Approach):
-------------------------------------------------------------------------------
1- Initialize result as 0.
1- Traverse all numbers from 1 to n.
2- Do XOR of numbers one by one with result.
3- At the end, return result.
#include <iostream>
using namespace std;
 
int main() {
	int n=8,i,a=0;
	for(i=1;i<=n;i++)
	{
	a=a^i;
	}
	cout<<a;
	return 0;
}
-----------------------------------------------------------------------------
Method 2 (Efficient method) :
-----------------------------------------------------------------------------
1- Find the remainder of n by moduling it with 4.
2- If rem = 0, then xor will be same as n.
3- If rem = 1, then xor will be 1.
4- If rem = 2, then xor will be n+1.
5- If rem = 3 ,then xor will be 0.
#include <iostream>
typedef long long int ll;
using namespace std;
int EfficentApproach(ll n)
{
	if(n%4==1)
	return 1;
	else if(n%4==2)
	return n+1;
	else if(n%4==3)
	return 0;
	else if(n%4==0)
	return n;
}

int main() {
	ll number;
	cout<<"Entre the number to XOR from 1 till you desire\n";
	cin>>number;
	cout<<"Result is :- "<<EfficentApproach(number);
	return 0;
}
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
How does this work?
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
When we do XOR of numbers, we get 0 as XOR value just before a multiple of 4. This keeps repeating before every multiple of 4.

Number Binary-Repr  XOR-from-1-to-n
1         1           [0001]
2        10           [0011]
3        11           [0000]  <----- We get a 0
4       100           [0100]  <----- Equals to n
5       101           [0001]
6       110           [0111]
7       111           [0000]  <----- We get 0
8      1000           [1000]  <----- Equals to n
9      1001           [0001]
10     1010           [1011]
11     1011           [0000] <------ We get 0
12     1100           [1100] <------ Equals to n