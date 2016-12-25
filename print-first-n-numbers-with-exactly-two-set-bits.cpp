/*
Print first n numbers with exactly two set bits
Given a number n, print first n positive integers with exactly two set bits in their binary representation.

Examples:

Input: n = 3
Output: 3 5 6
The first 3 numbers with two set bits are 3 (0011),
5 (0101) and 6 (0110)

Input: n = 5
Output: 3 5 6 9 10 12
------------------------------------------------------------------Solution----------------------------------------------------

A Simple Solution is to consider all positive integers one by one starting from 1. For every number,
 check if it has exactly two sets bits. If a number has exactly two set bits, print it and increment count of such numbers.

An Efficient Solution is to directly generate such numbers. If we clearly observe the numbers, we can rewrite them as given 
below pow(2,1)+pow(2,0), pow(2,2)+pow(2,0), pow(2,2)+pow(2,1), pow(2,3)+pow(2,0), pow(2,3)+pow(2,1), pow(2,3)+pow(2,2), ………

All numbers can be generated in increasing order according to higher of two set bits. The idea is to fix higher of two bits
 one by one. For current higher set bit, consider all lower bits and print the formed numbers.
 
 Time Complexity : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
int count(int n){
	int x = 1;
	while(n){
		int y =0;
		while(x>y){
			cout<<(1<<x)+(1<<y)<<" ";
			n--;
			if(n==0)
				return 0;
			y++;
		}
		x++;
	}
}
int main(){
 
    count(4);
    return 0;
}
//------------------------------------------------------------------- For Reference---------------------------------------------------------
#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int y=0;
	cout << (1 << y) << " ";   //outut 1
	return 0;
}
//--------------------------------------------------------------------For Reference---------------------------------------------------------
#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int y=1;
	cout << (2 >> y) << " ";  //output 1
	return 0;
}