/*
QUESTION 
************************************************************************************
Given two non-negative long integers, x and y given x <= y,
the task is to find bit-wise and of all integers from x and y, i.e., we need to compute value of x & (x+1) & … & (y-1) & y.7
Examples:
Input  : x = 12, y = 15
Output : 12 
12 & 13 & 14 & 14 = 12 
Input  : x = 10, y = 20
Output : 0 
**********************************************************************************
SOLUTION:-
An efficient solution is to follow following steps.
1) Find position of Most Significant Bit (MSB) in both numbers.
2) If positions of MSB are different, then result is 0.
3) If positions are same. Let positions be msb_p.
……a) We add 2msb_p to result.
……b) We subtract 2msb_p from x and y,
……c) Repeat steps 1, 2 and 3 for new values of x and y.
Example 1 :
x = 10, y = 20
Result is initially 0.
Position of MSB in x = 3
Position of MSB in y = 4
Since positions are different, return result.
Example 2 :
x = 17, y = 19
Result is initially 0.
Position of MSB in x = 4
Position of MSB in y = 4
Since positions are same, we compute 24.
We add 24 to result. 
Result becomes 16.
We subtract this value from x and y.
New value of x  = x - 24  = 17 - 16 = 1
New value of y  = y - 24  = 19 - 16 = 3
Position of MSB in new x = 1
Position of MSB in new y = 2
Since positions are different, we return result.        <Enjoy the code-Code to Help-Pushpak .A. Sharma>
*/
#include<iostream>
using namespace std;
typedef long long ll;
ll bitPosition(ll n)
{
	ll countMSB=-1;
	while(n)
	{
		n=n>>1;
		countMSB++;
	}
	return countMSB;
}
ll operation(ll a,ll b)
{
	ll result = 0;
	while(a && b)
	{
		ll positionP1=bitPosition(a);
		ll positionP2=bitPosition(b);
		if(positionP1 != positionP2)
		break;
		ll value = 1<<positionP1;
		result += value;
		a = a - value;
		b = b - value;
	} 
	return result;
}
 
int main() {
	ll x,y;
	cout<<"Entre the value to which bit-wise and operation\n";
	cin>>x>>y;
	cout<<"The Result is :- "<<operation(x,y);
	return 0;
}




    
